/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _sendAcknowledgementRBC_trainData_pkg_H_
#define _sendAcknowledgementRBC_trainData_pkg_H_

#include "kcg_types.h"
#include "headerMsg146_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* trainData_pkg::sendAcknowledgementRBC */
extern void sendAcknowledgementRBC_trainData_pkg(
  /* trainData_pkg::sendAcknowledgementRBC::EVC_timeStamp */ T_TRAIN EVC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendAcknowledgementRBC::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendAcknowledgementRBC::trainDataToRBC */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *trainDataToRBC,
  /* trainData_pkg::sendAcknowledgementRBC::updatedStatus */ trainDataStatus_T_trainData_Types_pkg *updatedStatus);

#endif /* _sendAcknowledgementRBC_trainData_pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendAcknowledgementRBC_trainData_pkg.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

