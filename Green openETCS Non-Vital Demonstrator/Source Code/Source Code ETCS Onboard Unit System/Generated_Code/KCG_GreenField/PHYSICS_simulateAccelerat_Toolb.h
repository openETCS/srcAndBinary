/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */
#ifndef _PHYSICS_simulateAccelerat_Tool
#define _PHYSICS_simulateAccelerat_Tool

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::acceleration */ acceleration;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_PHYSICS_simulateAccelerat_;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime */
extern void PHYSICS_simulateAccelerat_Toolb(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */ kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerat_ *outC);

extern void PHYSICS_simulateAccelerat_reset(
  outC_PHYSICS_simulateAccelerat_ *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_simulateAccelerat_init_(
  outC_PHYSICS_simulateAccelerat_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PHYSICS_simulateAccelerat_Tool */
/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAccelerat_Toolb.h
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

