/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendValidTrainDataRBC_trainData_pkg.h"

/* trainData_pkg::sendValidTrainDataRBC */
void sendValidTrainDataRBC_trainData_pkg(
  /* trainData_pkg::sendValidTrainDataRBC::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::sendValidTrainDataRBC::evc_timeStamp */T_TRAIN evc_timeStamp,
  /* trainData_pkg::sendValidTrainDataRBC::nidEngine */NID_ENGINE nidEngine,
  /* trainData_pkg::sendValidTrainDataRBC::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendValidTrainDataRBC::p0_positionReport */PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::p1_positionReport */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::trainDataToRBC */Radio_TrainTrack_Message_T_Radio_Types_Pkg *trainDataToRBC,
  /* trainData_pkg::sendValidTrainDataRBC::updatedStatus */trainDataStatus_T_trainData_Types_pkg *updatedStatus)
{
  (*trainDataToRBC).present = kcg_true;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(updatedStatus, actualStatus);
  (*updatedStatus).timeStampValidateToRBC = evc_timeStamp;
  (*updatedStatus).watingForRBCResponse = kcg_true;
  (*updatedStatus).timeStampValidateToRBC = evc_timeStamp;
  /* 1 */
  headerMsg129_trainData_pkg(
    nidEngine,
    evc_timeStamp,
    &(*trainDataToRBC).header);
  /* 1 */
  packetsFor129_trainData_pkg(
    trainData,
    p0_positionReport,
    p1_positionReport,
    &(*trainDataToRBC).packets);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendValidTrainDataRBC_trainData_pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

