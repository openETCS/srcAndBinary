/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _DriverAck_H_
#define _DriverAck_H_

#include "kcg_types.h"
#include "decideDriverAck.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DriverAck::service_brake */ service_brake;
  kcg_bool /* DriverAck::needsAckFromDriver */ needsAckFromDriver;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* DriverAck::getAckDistance::else::_L1 */ _L1_getAckDistance;
  SSM_ST_DriverAck /* DriverAck::DriverAck */ DriverAck_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_DriverAck;

/* ===========  node initialization and cycle functions  =========== */
/* DriverAck */
extern void DriverAck(
  /* DriverAck::getAck */kcg_bool getAck,
  /* DriverAck::newLevel */M_LEVEL newLevel,
  /* DriverAck::oldLevel */M_LEVEL oldLevel,
  /* DriverAck::currentDistance */kcg_int currentDistance,
  /* DriverAck::ackDistance */kcg_int ackDistance,
  /* DriverAck::immediateAck */kcg_bool immediateAck,
  outC_DriverAck *outC);

extern void DriverAck_reset(outC_DriverAck *outC);

#endif /* _DriverAck_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriverAck.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

