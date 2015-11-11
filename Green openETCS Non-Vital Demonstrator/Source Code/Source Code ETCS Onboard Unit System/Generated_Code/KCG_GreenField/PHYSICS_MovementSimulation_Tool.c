/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_MovementSimulation_Tool.h"

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_MovementSimulation_init(outC_PHYSICS_MovementSimulation *outC)
{
  outC->resetOut = kcg_true;
  outC->needZeroPosition = kcg_true;
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->rem__L15_SM1_Driving = 0.0;
  outC->SM1_state_nxt = SSM_st_Reset_SM1;
  outC->_L14_SM1_Driving = 0.0;
  outC->odometry.valid = kcg_true;
  outC->odometry.timestamp = 0;
  outC->odometry.odo.o_nominal = 0;
  outC->odometry.odo.o_min = 0;
  outC->odometry.odo.o_max = 0;
  outC->odometry.speed.v_safeNominal = 0;
  outC->odometry.speed.v_rawNominal = 0;
  outC->odometry.speed.v_lower = 0;
  outC->odometry.speed.v_upper = 0;
  outC->odometry.acceleration = 0;
  outC->odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->odometry.motionDirection = unknownDirection_Obu_BasicTypes;
  outC->timestamp = 0;
  outC->velocity = 0.0;
  outC->position = 0.0;
  /* 1 */ TRAIN_systemTimeGenerator_init_(&outC->_1_Context_1);
  /* 1 */ PHYSICS_simulateAccelerat_init_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PHYSICS_MovementSimulation_rese(outC_PHYSICS_MovementSimulation *outC)
{
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ TRAIN_systemTimeGenerator_reset(&outC->_1_Context_1);
  /* 1 */ PHYSICS_simulateAccelerat_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Physics::PHYSICS_MovementSimulation */
void PHYSICS_MovementSimulation_Tool(
  /* Toolbox::Physics::PHYSICS_MovementSimulation::reset */ kcg_bool reset,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::accelerationInPercent */ kcg_real accelerationInPercent,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tractionCutOffFromEVC */ kcg_bool tractionCutOffFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateServiceBrakeFromEVC */ kcg_bool activateServiceBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateEmergencyBrakeFromEVC */ kcg_bool activateEmergencyBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialPosition */ kcg_real initialPosition,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialVelocity */ kcg_real initialVelocity,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::timeSinceLastCycle */ kcg_int timeSinceLastCycle,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateBrakeBuildupTime */ kcg_bool activateBrakeBuildupTime,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateAirResistance */ kcg_bool activateAirResistance,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::maximumAcceleration */ kcg_real maximumAcceleration,
  outC_PHYSICS_MovementSimulation *outC)
{
  /* Toolbox::Physics::PHYSICS_MovementSimulation */
  static kcg_real tmp4;
  /* Toolbox::Physics::PHYSICS_MovementSimulation */
  static kcg_real tmp3;
  /* Toolbox::Physics::PHYSICS_MovementSimulation */
  static kcg_real tmp2;
  /* Toolbox::Physics::PHYSICS_MovementSimulation */
  static OdometrySpeed_T_Toolbox tmp1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation */
  static kcg_real tmp;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L30 */
  static kcg_real _L30_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L28 */
  static kcg_real _L28_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L8 */
  static kcg_real _L8_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static SSM_ST_SM1 SM1_state_sel;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static SSM_ST_SM1 SM1_state_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool SM1_reset_act;
  
  outC->resetOut = reset;
  /* 1_1 */ if (outC->init2) {
    SM1_state_sel = SSM_st_Reset_SM1;
    outC->init2 = kcg_false;
    outC->needZeroPosition = kcg_false;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
    outC->needZeroPosition = tractionCutOffFromEVC |
      activateServiceBrakeFromEVC | activateEmergencyBrakeFromEVC |
      (!(accelerationInPercent <= 0.0) & outC->needZeroPosition);
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_Driving_SM1 :
      if (reset) {
        SM1_state_act = SSM_st_Reset_SM1;
      }
      else {
        SM1_state_act = SSM_st_Driving_SM1;
      }
      SM1_reset_act = reset;
      break;
    case SSM_st_Reset_SM1 :
      SM1_state_act = SSM_st_Driving_SM1;
      SM1_reset_act = kcg_true;
      break;
    
  }
  /* ck_activateEmergencyBrakeFromEVC */ if (activateEmergencyBrakeFromEVC) {
  }
  else {
    _5_else_clock_IfBlock1 = activateServiceBrakeFromEVC;
    /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
    }
    else {
      else_clock_IfBlock1 = tractionCutOffFromEVC | outC->needZeroPosition;
    }
  }
  /* 1 */
  TRAIN_systemTimeGenerator_Toolb(timeSinceLastCycle, &outC->_1_Context_1);
  outC->timestamp = outC->_1_Context_1.timestamp;
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_Driving_SM1 :
      /* ck_activateEmergencyBrakeFromEVC */ if (activateEmergencyBrakeFromEVC) {
        tmp4 = - 300.0;
      }
      else /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
        tmp4 = - 100.0;
      }
      else /* ck_anon_activ */ if (else_clock_IfBlock1) {
        tmp4 = 0.0;
      }
      else {
        tmp4 = accelerationInPercent;
      }
      _L28_SM1_Driving = maximumAcceleration * (tmp4 / 100.0);
      if (SM1_reset_act) {
        /* 1 */ PHYSICS_simulateAccelerat_reset(&outC->Context_1);
        outC->init = kcg_true;
      }
      /* ck__L31 */ if (activateBrakeBuildupTime) {
        /* 1 */
        PHYSICS_simulateAccelerat_Toolb(_L28_SM1_Driving, &outC->Context_1);
        _L30_SM1_Driving = outC->Context_1.acceleration;
      }
      else {
        _L30_SM1_Driving = _L28_SM1_Driving;
      }
      /* fby_1_init_1 */ if (outC->init) {
        _L8_SM1_Driving = initialVelocity;
        tmp2 = initialPosition;
      }
      else {
        _L8_SM1_Driving = outC->rem__L15_SM1_Driving;
        tmp2 = outC->_L14_SM1_Driving;
      }
      /* ck__L25 */ if (activateAirResistance) {
        tmp3 = /* 1 */
          PHYSICS_simulateAirResistance_T(_L8_SM1_Driving, _L30_SM1_Driving);
      }
      else {
        tmp3 = _L30_SM1_Driving;
      }
      /* 1 */
      PHYSICS_acceleratedMotion_Toolb(
        tmp3,
        tmp2,
        _L8_SM1_Driving,
        timeSinceLastCycle,
        &outC->_L14_SM1_Driving,
        &outC->rem__L15_SM1_Driving);
      outC->position = outC->_L14_SM1_Driving;
      outC->velocity = /* 2 */
        m_s_To_km_h_Toolbox_Converters(outC->rem__L15_SM1_Driving);
      outC->SM1_state_nxt = SSM_st_Driving_SM1;
      tmp = outC->rem__L15_SM1_Driving;
      outC->init = kcg_false;
      break;
    case SSM_st_Reset_SM1 :
      outC->position = initialPosition;
      outC->velocity = 0.0;
      outC->SM1_state_nxt = SSM_st_Reset_SM1;
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
    &outC->odometry);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_MovementSimulation_Tool.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

