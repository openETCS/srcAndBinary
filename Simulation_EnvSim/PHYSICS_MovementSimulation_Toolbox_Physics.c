/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_MovementSimulation_Toolbox_Physics.h"

void PHYSICS_MovementSimulation_reset_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
  outC->init4 = kcg_true;
  /* 1 */ ODO_reset_Toolbox_TrainModules(&outC->Context_1);
  /* 1 */
  TRAIN_systemTimeGenerator_reset_Toolbox_Functions(&outC->_1_Context_1);
  /* 1 */
  PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(&outC->_2_Context_1);
  /* 1 */
  PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
    &outC->_3_Context_1);
}

/* Toolbox::Physics::PHYSICS_MovementSimulation */
void PHYSICS_MovementSimulation_Toolbox_Physics(
  /* Toolbox::Physics::PHYSICS_MovementSimulation::reset */kcg_bool reset,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::accelerationInPercent */kcg_real accelerationInPercent,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tractionCutOffFromEVC */kcg_bool tractionCutOffFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateServiceBrakeFromEVC */kcg_bool activateServiceBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateEmergencyBrakeFromEVC */kcg_bool activateEmergencyBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialPosition */kcg_real initialPosition,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialVelocity */kcg_real initialVelocity,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::timeSinceLastCycle */kcg_int timeSinceLastCycle,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateBrakeBuildupTime */kcg_bool activateBrakeBuildupTime,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateAirResistance */kcg_bool activateAirResistance,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::maximumAcceleration */kcg_real maximumAcceleration,
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  static kcg_real tmp3;
  static kcg_real tmp2;
  static OdometrySpeed_T_Toolbox tmp1;
  static kcg_real tmp;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool SM1_reset_act;
  
  outC->IfBlock1_clock = activateEmergencyBrakeFromEVC;
  outC->resetOut = reset;
  if (outC->init) {
    outC->SM1_state_sel = SSM_st_Reset_SM1;
    outC->init = kcg_false;
    outC->needZeroPosition = kcg_false;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
    outC->needZeroPosition = tractionCutOffFromEVC |
      activateServiceBrakeFromEVC | outC->IfBlock1_clock |
      (!(accelerationInPercent <= 0.0) & outC->needZeroPosition);
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Driving_SM1 :
      SM1_reset_act = outC->resetOut;
      if (outC->resetOut) {
        outC->SM1_state_act = SSM_st_Reset_SM1;
        outC->SM1_fired_strong = SSM_TR_Driving_1_SM1;
      }
      else {
        outC->SM1_state_act = SSM_st_Driving_SM1;
        outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      break;
    case SSM_st_Reset_SM1 :
      SM1_reset_act = kcg_true;
      outC->SM1_state_act = SSM_st_Driving_SM1;
      outC->SM1_fired_strong = SSM_TR_Reset_1_SM1;
      break;
    
  }
  if (activateEmergencyBrakeFromEVC) {
  }
  else {
    outC->_6_else_clock_IfBlock1 = activateServiceBrakeFromEVC;
    if (outC->_6_else_clock_IfBlock1) {
    }
    else {
      outC->else_clock_IfBlock1 = tractionCutOffFromEVC |
        outC->needZeroPosition;
    }
  }
  /* 1 */
  TRAIN_systemTimeGenerator_Toolbox_Functions(
    timeSinceLastCycle,
    &outC->_1_Context_1);
  outC->timestamp = outC->_1_Context_1.timestamp;
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      outC->tmp = activateAirResistance;
      if (SM1_reset_act) {
        outC->init4 = kcg_true;
        /* 1 */
        PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
          &outC->_3_Context_1);
      }
      outC->tmp5 = activateBrakeBuildupTime;
      if (activateEmergencyBrakeFromEVC) {
        tmp3 = - 300.0;
      }
      else if (outC->_6_else_clock_IfBlock1) {
        tmp3 = - 100.0;
      }
      else if (outC->else_clock_IfBlock1) {
        tmp3 = 0.0;
      }
      else {
        tmp3 = accelerationInPercent;
      }
      outC->_L28_SM1_Driving = maximumAcceleration * (tmp3 / 100.0);
      if (outC->tmp5) {
        /* 1 */
        PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
          outC->_L28_SM1_Driving,
          &outC->_3_Context_1);
        outC->_L30_SM1_Driving = outC->_3_Context_1.acceleration;
      }
      else {
        outC->_L30_SM1_Driving = outC->_L28_SM1_Driving;
      }
      if (outC->init4) {
        outC->_L8_SM1_Driving = initialVelocity;
        tmp = initialPosition;
      }
      else {
        outC->_L8_SM1_Driving = outC->rem__L15_SM1_Driving;
        tmp = outC->_L14_SM1_Driving;
      }
      if (outC->tmp) {
        tmp2 = /* 1 */
          PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
            outC->_L8_SM1_Driving,
            outC->_L30_SM1_Driving);
      }
      else {
        tmp2 = outC->_L30_SM1_Driving;
      }
      /* 1 */
      PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
        tmp2,
        tmp,
        outC->_L8_SM1_Driving,
        timeSinceLastCycle,
        &outC->_2_Context_1);
      outC->_L14_SM1_Driving = outC->_2_Context_1.newPosition;
      outC->velocity = /* 2 */
        m_s_To_km_h_Toolbox_Converters(outC->_2_Context_1.newVelocity);
      outC->position = outC->_L14_SM1_Driving;
      outC->SM1_state_nxt = SSM_st_Driving_SM1;
      outC->SM1_fired = outC->SM1_fired_strong;
      tmp = outC->_2_Context_1.newVelocity;
      outC->rem__L15_SM1_Driving = outC->_2_Context_1.newVelocity;
      outC->init4 = kcg_false;
      break;
    case SSM_st_Reset_SM1 :
      outC->velocity = 0.0;
      outC->position = initialPosition;
      outC->SM1_state_nxt = SSM_st_Reset_SM1;
      outC->SM1_fired = outC->SM1_fired_strong;
      tmp = 0.0;
      break;
    
  }
  tmp1 = /* 1 */ m_s_To_cm_s_Toolbox_Converters(tmp);
  /* 1 */
  ODO_Toolbox_TrainModules(
    outC->timestamp,
    tmp1,
    (kcg_int)
      (accelerationInPercent / 100.0 * cMaximumAcceleration_Toolbox * 100.0),
    (kcg_int) (100.0 * outC->position),
    cabAFirst_Obu_BasicTypes_Pkg,
    &outC->Context_1);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->odometry,
    &outC->Context_1.odometry);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_MovementSimulation_Toolbox_Physics.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

