/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _DriverAck_Levels_Pkg_H_
#define _DriverAck_Levels_Pkg_H_

#include "kcg_types.h"
#include "decideDriverAck_Levels_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Levels_Pkg::DriverAck::service_brake */ service_brake;
  kcg_bool /* Levels_Pkg::DriverAck::needsAckFromDriver */ needsAckFromDriver;
  kcg_bool /* Levels_Pkg::DriverAck::transitionPositionPassed */ transitionPositionPassed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_DriverAck /* Levels_Pkg::DriverAck::DriverAck */ DriverAck_state_nxt;
  kcg_int /* Levels_Pkg::DriverAck::endAcknowledgeDistance */ endAcknowledgeDistance;
  kcg_bool /* Levels_Pkg::DriverAck::waitingForAck */ waitingForAck;
  kcg_int /* Levels_Pkg::DriverAck::beginAcknowledgeDistance */ beginAcknowledgeDistance;
  kcg_bool /* Levels_Pkg::DriverAck::waitingForPassing */ waitingForPassing;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_DriverAck_Levels_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Levels_Pkg::DriverAck */
extern void DriverAck_Levels_Pkg(
  /* Levels_Pkg::DriverAck::getAck */kcg_bool getAck,
  /* Levels_Pkg::DriverAck::newLevel */M_LEVEL newLevel,
  /* Levels_Pkg::DriverAck::oldLevel */M_LEVEL oldLevel,
  /* Levels_Pkg::DriverAck::currentDistance */kcg_int currentDistance,
  /* Levels_Pkg::DriverAck::transitionPosition */kcg_int transitionPosition,
  /* Levels_Pkg::DriverAck::ackDistance */kcg_int ackDistance,
  /* Levels_Pkg::DriverAck::immediateAck */kcg_bool immediateAck,
  /* Levels_Pkg::DriverAck::startOfMissionEnded */kcg_bool startOfMissionEnded,
  /* Levels_Pkg::DriverAck::transitionKnown */kcg_bool transitionKnown,
  /* Levels_Pkg::DriverAck::referencePosition */L_internal_Type_Obu_BasicTypes_Pkg referencePosition,
  outC_DriverAck_Levels_Pkg *outC);

extern void DriverAck_reset_Levels_Pkg(outC_DriverAck_Levels_Pkg *outC);

#endif /* _DriverAck_Levels_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriverAck_Levels_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

