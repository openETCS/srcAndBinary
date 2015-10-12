/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _checkRadioMessages_trainData_pkg_H_
#define _checkRadioMessages_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* trainData_pkg::checkRadioMessages */
extern void checkRadioMessages_trainData_pkg(
  /* trainData_pkg::checkRadioMessages::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::checkRadioMessages::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::checkRadioMessages::ackReceived */ kcg_bool *ackReceived,
  /* trainData_pkg::checkRadioMessages::ackRequested */ kcg_bool *ackRequested);

#endif /* _checkRadioMessages_trainData_pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkRadioMessages_trainData_pkg.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

