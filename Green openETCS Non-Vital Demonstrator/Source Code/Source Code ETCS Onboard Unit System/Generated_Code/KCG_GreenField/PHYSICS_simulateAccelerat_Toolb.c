/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAccelerat_Toolb.h"

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_simulateAccelerat_init_(outC_PHYSICS_simulateAccelerat_ *outC)
{
  outC->init = kcg_true;
  outC->acceleration = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


void PHYSICS_simulateAccelerat_reset(outC_PHYSICS_simulateAccelerat_ *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime */
void PHYSICS_simulateAccelerat_Toolb(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */ kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerat_ *outC)
{
  /* 1 */ if (outC->init) {
    outC->init = kcg_false;
    outC->acceleration = requestedAcceleration;
  }
  else {
    outC->acceleration = (requestedAcceleration - outC->acceleration) * 0.04 +
      outC->acceleration;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAccelerat_Toolb.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

