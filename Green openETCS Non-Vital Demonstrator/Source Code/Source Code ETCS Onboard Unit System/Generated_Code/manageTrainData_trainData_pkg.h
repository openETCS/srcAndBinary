/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _manageTrainData_trainData_pkg_H_
#define _manageTrainData_trainData_pkg_H_

#include "kcg_types.h"
#include "sendValidTrainDataRBC_trainData_pkg.h"
#include "sendAcknowledgementRBC_trainData_pkg.h"
#include "checkRadioMessages_trainData_pkg.h"
#include "checkAcknowledgmentGeneral_trainData_pkg.h"
#include "trainDataStorage_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* trainData_pkg::manageTrainData::actualTrainData */ actualTrainData;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* trainData_pkg::manageTrainData::trainDataToRBC */ trainDataToRBC;
  trainData_Trigger_T_trainData_Types_pkg /* trainData_pkg::manageTrainData::triggerFromTrainData */ triggerFromTrainData;
  trainDataStatus_T_trainData_Types_pkg /* trainData_pkg::manageTrainData::updatedStatus */ updatedStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_trainDataStorage_trainData_pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageTrainData_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::manageTrainData */
extern void manageTrainData_trainData_pkg(
  /* trainData_pkg::manageTrainData::reset */kcg_bool reset,
  /* trainData_pkg::manageTrainData::trainDatafromTIU */trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::manageTrainData::trainDatafromDriver */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::manageTrainData::trainDataAckfromDriver */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::manageTrainData::trackMessages */ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::manageTrainData::timeStamp */T_TRAIN timeStamp,
  /* trainData_pkg::manageTrainData::eventsForTrainData */trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  /* trainData_pkg::manageTrainData::nidEngine */NID_ENGINE nidEngine,
  /* trainData_pkg::manageTrainData::p0_positionReport */PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::manageTrainData::p1_positionReport */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  outC_manageTrainData_trainData_pkg *outC);

extern void manageTrainData_reset_trainData_pkg(
  outC_manageTrainData_trainData_pkg *outC);

#endif /* _manageTrainData_trainData_pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageTrainData_trainData_pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

