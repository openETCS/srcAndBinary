/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::ODO */
void ODO_Toolbox_TrainModules(
  /* Toolbox::TrainModules::ODO::timestamp */ T_internal_Type_Obu_BasicTypes_ timestamp,
  /* Toolbox::TrainModules::ODO::velocity */ OdometrySpeed_T_Toolbox velocity,
  /* Toolbox::TrainModules::ODO::acceleration */ A_internal_Type_Obu_BasicTypes_ acceleration,
  /* Toolbox::TrainModules::ODO::position */ L_internal_Type_Obu_BasicTypes_ position,
  /* Toolbox::TrainModules::ODO::motionDirection */ odoMotionDirection_T_Obu_BasicT motionDirection,
  /* Toolbox::TrainModules::ODO::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry)
{
  (*odometry).valid = kcg_true;
  (*odometry).timestamp = timestamp;
  (*odometry).acceleration = acceleration;
  (*odometry).motionDirection = motionDirection;
  /* 1 */
  ODO_genOdometryInaccuracies_Too(
    position,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox,
    &(*odometry).odo);
  /* 1 */
  ODO_genSpeedInaccuracies_Toolbo(
    velocity,
    (odometryFactors_T_Toolbox *) &cOdometryFactors_Toolbox,
    &(*odometry).speed);
  /* 1 */ if (velocity > 0) {
    (*odometry).motionState = Motion_Obu_BasicTypes_Pkg;
  }
  else {
    (*odometry).motionState = noMotion_Obu_BasicTypes_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_Toolbox_TrainModules.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

