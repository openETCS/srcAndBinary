/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendAcknowledgementRBC_trainData_pkg.h"

/* trainData_pkg::sendAcknowledgementRBC */
void sendAcknowledgementRBC_trainData_pkg(
  /* trainData_pkg::sendAcknowledgementRBC::EVC_timeStamp */ T_TRAIN EVC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendAcknowledgementRBC::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendAcknowledgementRBC::trainDataToRBC */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *trainDataToRBC,
  /* trainData_pkg::sendAcknowledgementRBC::updatedStatus */ trainDataStatus_T_trainData_Types_pkg *updatedStatus)
{
  (*trainDataToRBC).present = kcg_true;
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &(*trainDataToRBC).packets,
    (outPackets_T_Common_Types_Pkg *) &cNoPackets_trainData_pkg);
  /* 1 */
  headerMsg146_trainData_pkg(
    nidEngine,
    EVC_timeStamp,
    RBC_timeStamp,
    &(*trainDataToRBC).header);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(updatedStatus, actualStatus);
  (*updatedStatus).validatedbyRBC = kcg_true;
  (*updatedStatus).waitingForRBCResponse = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendAcknowledgementRBC_trainData_pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

