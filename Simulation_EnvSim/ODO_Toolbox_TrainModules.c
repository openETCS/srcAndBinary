/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_Toolbox_TrainModules.h"

void ODO_reset_Toolbox_TrainModules(outC_ODO_Toolbox_TrainModules *outC)
{
  /* 1 */ ODO_genSpeedInaccuracies_reset_Toolbox_Functions(&outC->Context_1);
  /* 1 */
  ODO_genOdometryInaccuracies_reset_Toolbox_Functions(&outC->_1_Context_1);
}

/* Toolbox::TrainModules::ODO */
void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* Toolbox::TrainModules::ODO::velocity */OdometrySpeed_T_Toolbox velocity,
  /* Toolbox::TrainModules::ODO::acceleration */A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* Toolbox::TrainModules::ODO::position */L_internal_Type_Obu_BasicTypes_Pkg position,
  /* Toolbox::TrainModules::ODO::motionDirection */odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  outC_ODO_Toolbox_TrainModules *outC)
{
  outC->odometry.valid = kcg_true;
  outC->odometry.timestamp = timestamp;
  outC->odometry.acceleration = acceleration;
  outC->odometry.motionDirection = motionDirection;
  /* 1 */
  ODO_genOdometryInaccuracies_Toolbox_Functions(
    position,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox,
    &outC->_1_Context_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->odometry.odo,
    &outC->_1_Context_1.odometryLocations);
  /* 1 */
  ODO_genSpeedInaccuracies_Toolbox_Functions(
    velocity,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox,
    &outC->Context_1);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->odometry.speed,
    &outC->Context_1.odometrySpeeds);
  if (velocity > 0) {
    outC->odometry.motionState = Motion_Obu_BasicTypes_Pkg;
  }
  else {
    outC->odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_Toolbox_TrainModules.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

