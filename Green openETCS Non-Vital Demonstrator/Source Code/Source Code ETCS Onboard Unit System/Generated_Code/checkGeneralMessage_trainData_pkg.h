/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
#ifndef _checkGeneralMessage_trainData_pkg_H_
#define _checkGeneralMessage_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trainData_pkg::checkGeneralMessage::genMessageReceived */ genMessageReceived;
  kcg_bool /* trainData_pkg::checkGeneralMessage::ackRequested */ ackRequested;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_checkGeneralMessage_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::checkGeneralMessage */
extern void checkGeneralMessage_trainData_pkg(
  /* trainData_pkg::checkGeneralMessage::trackMessages */ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  outC_checkGeneralMessage_trainData_pkg *outC);

extern void checkGeneralMessage_reset_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC);

#endif /* _checkGeneralMessage_trainData_pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkGeneralMessage_trainData_pkg.h
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

