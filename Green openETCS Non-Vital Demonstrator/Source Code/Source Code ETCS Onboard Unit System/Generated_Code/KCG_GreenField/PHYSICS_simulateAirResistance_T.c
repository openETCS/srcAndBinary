/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAirResistance_T.h"

/* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance */
kcg_real PHYSICS_simulateAirResistance_T(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentVelocity */ kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentAcceleration */ kcg_real currentAcceleration)
{
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::newAcceleration */
  static kcg_real newAcceleration;
  
  newAcceleration = currentAcceleration - 1.2 * 0.2 * 10.4 * currentVelocity *
    currentVelocity / 2.0 / 42000.0;
  return newAcceleration;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAirResistance_T.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

