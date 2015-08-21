/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _calculatePendingState_xdebugSupport_Pkg_H_
#define _calculatePendingState_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "Read_P041_Legacy_TM_specific.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  filterRelatedEvents_T_Common_Types_Pkg /* xdebugSupport_Pkg::calculatePendingState::outFilterEvents */ outFilterEvents;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* xdebugSupport_Pkg::calculatePendingState::p41Store */ p41Store;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculatePendingState_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::calculatePendingState */
extern void calculatePendingState_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::calculatePendingState::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::calculatePendingState::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_calculatePendingState_xdebugSupport_Pkg *outC);

extern void calculatePendingState_reset_xdebugSupport_Pkg(
  outC_calculatePendingState_xdebugSupport_Pkg *outC);

#endif /* _calculatePendingState_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculatePendingState_xdebugSupport_Pkg.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

