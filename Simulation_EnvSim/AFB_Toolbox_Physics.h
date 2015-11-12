/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */
#ifndef _AFB_Toolbox_Physics_H_
#define _AFB_Toolbox_Physics_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::AFB::calculatedAcceleration */ calculatedAcceleration;
  kcg_bool /* Toolbox::Physics::AFB::afbActive */ afbActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Toolbox::Physics::AFB::IfBlock1::else::IfBlock2 */ IfBlock2_clock_IfBlock1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2 */ _1_IfBlock2_clock_IfBlock1;
  kcg_bool /* Toolbox::Physics::AFB::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L7 */ _L7_IfBlock1_IfBlock2;
  kcg_real /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L19 */ _L19_IfBlock1_IfBlock2;
  kcg_real /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L9 */ _L9_IfBlock1_IfBlock2;
  kcg_bool /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else */ else_clock_IfBlock1_IfBlock2;
  kcg_real /* Toolbox::Physics::AFB::realTargetSpeed */ realTargetSpeed;
} outC_AFB_Toolbox_Physics;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::AFB */
extern void AFB_Toolbox_Physics(
  /* Toolbox::Physics::AFB::targetSpeed */kcg_real targetSpeed,
  /* Toolbox::Physics::AFB::traction */kcg_real traction,
  /* Toolbox::Physics::AFB::brake */kcg_real brake,
  /* Toolbox::Physics::AFB::currentSpeed */kcg_real currentSpeed,
  outC_AFB_Toolbox_Physics *outC);

extern void AFB_reset_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC);

#endif /* _AFB_Toolbox_Physics_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** AFB_Toolbox_Physics.h
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

