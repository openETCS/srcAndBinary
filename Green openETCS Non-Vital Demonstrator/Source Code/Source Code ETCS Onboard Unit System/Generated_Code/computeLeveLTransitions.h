/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _computeLeveLTransitions_H_
#define _computeLeveLTransitions_H_

#include "kcg_types.h"
#include "ComputeTransitionConditions.h"
#include "IsImmediateOrder.h"
#include "IsDriverSelection.h"
#include "LevelStateMachine.h"
#include "DriverAck.h"
#include "DelayTransitionOrder.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* computeLeveLTransitions::next_level */ next_level;
  kcg_bool /* computeLeveLTransitions::TripTrain */ TripTrain;
  M_LEVEL /* computeLeveLTransitions::previous_level */ previous_level;
  kcg_bool /* computeLeveLTransitions::needsAckFromDriver */ needsAckFromDriver;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* computeLeveLTransitions::announced_level */ announced_level;
  kcg_bool /* computeLeveLTransitions::announce_driver_selection */ announce_driver_selection;
  kcg_bool /* computeLeveLTransitions::service_brake */ service_brake;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DelayTransitionOrder /* 1 */ _2_Context_1;
  outC_LevelStateMachine /* 1 */ _1_Context_1;
  outC_DriverAck /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_computeLeveLTransitions;

/* ===========  node initialization and cycle functions  =========== */
/* computeLeveLTransitions */
extern void computeLeveLTransitions(
  /* computeLeveLTransitions::getAck */kcg_bool getAck,
  /* computeLeveLTransitions::currentDistance */kcg_int currentDistance,
  /* computeLeveLTransitions::ackDistance */kcg_int ackDistance,
  /* computeLeveLTransitions::immediateAck */kcg_bool immediateAck,
  /* computeLeveLTransitions::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* computeLeveLTransitions::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* computeLeveLTransitions::received_L1_MA */kcg_bool received_L1_MA,
  /* computeLeveLTransitions::received_target_speed */kcg_bool received_target_speed,
  outC_computeLeveLTransitions *outC);

extern void computeLeveLTransitions_reset(outC_computeLeveLTransitions *outC);

#endif /* _computeLeveLTransitions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** computeLeveLTransitions.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

