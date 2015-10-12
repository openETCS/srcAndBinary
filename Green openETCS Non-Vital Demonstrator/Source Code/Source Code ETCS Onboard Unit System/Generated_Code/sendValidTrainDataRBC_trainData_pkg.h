/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _sendValidTrainDataRBC_trainData_pkg_H_
#define _sendValidTrainDataRBC_trainData_pkg_H_

#include "kcg_types.h"
#include "headerMsg129_trainData_pkg.h"
#include "packetsFor129_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* trainData_pkg::sendValidTrainDataRBC */
extern void sendValidTrainDataRBC_trainData_pkg(
  /* trainData_pkg::sendValidTrainDataRBC::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::sendValidTrainDataRBC::evc_timeStamp */ T_TRAIN evc_timeStamp,
  /* trainData_pkg::sendValidTrainDataRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendValidTrainDataRBC::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendValidTrainDataRBC::p0_positionReport */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::p1_positionReport */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::trainDataToRBC */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *trainDataToRBC,
  /* trainData_pkg::sendValidTrainDataRBC::updatedStatus */ trainDataStatus_T_trainData_Types_pkg *updatedStatus);

#endif /* _sendValidTrainDataRBC_trainData_pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendValidTrainDataRBC_trainData_pkg.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

