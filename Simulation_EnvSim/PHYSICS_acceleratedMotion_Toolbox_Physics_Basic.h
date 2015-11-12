/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */
#ifndef _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_
#define _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::newPosition */ newPosition;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::newVelocity */ newVelocity;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeInSeconds */ timeInSeconds;
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L14 */ _L14;
} outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion */
extern void PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::acceleration */kcg_real acceleration,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentPosition */kcg_real currentPosition,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentVelocity */kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeSinceLastCycle */kcg_int timeSinceLastCycle,
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC);

extern void PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC);

#endif /* _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

