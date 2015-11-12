/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h"

void PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC)
{
}

/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion */
void PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::acceleration */kcg_real acceleration,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentPosition */kcg_real currentPosition,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentVelocity */kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeSinceLastCycle */kcg_int timeSinceLastCycle,
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC)
{
  outC->timeInSeconds = (kcg_real) timeSinceLastCycle / 1000.0;
  outC->_L14 = acceleration * outC->timeInSeconds + currentVelocity;
  if (outC->_L14 >= 0.0) {
    outC->newVelocity = outC->_L14;
  }
  else {
    outC->newVelocity = 0.0;
  }
  if ((acceleration < 0.0) & (currentVelocity == 0.0)) {
    outC->newPosition = currentPosition;
  }
  else {
    outC->newPosition = acceleration / 0.5 * outC->timeInSeconds *
      outC->timeInSeconds + currentVelocity * outC->timeInSeconds +
      currentPosition;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

