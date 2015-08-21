/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTrainData_trainData_pkg.h"

void manageTrainData_reset_trainData_pkg(
  outC_manageTrainData_trainData_pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ trainDataStorage_reset_trainData_pkg(&outC->Context_1);
}

/* trainData_pkg::manageTrainData */
void manageTrainData_trainData_pkg(
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
  outC_manageTrainData_trainData_pkg *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* trainData_pkg::manageTrainData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* trainData_pkg::manageTrainData::ackReceived */
  static kcg_bool ackReceived;
  /* trainData_pkg::manageTrainData::ackRequested */
  static kcg_bool ackRequested;
  /* trainData_pkg::manageTrainData::_L18 */
  static trainDataStatus_T_trainData_Types_pkg _L18;
  
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->triggerFromTrainData,
    (trainData_Trigger_T_trainData_Types_pkg *)
      &cNoTrigger_trainData_Types_pkg);
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L18,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L18, &outC->updatedStatus);
  }
  if (_L18.watingForRBCResponse) {
    /* 1 */
    checkRadioMessages_trainData_pkg(
      trackMessages,
      &_L18,
      &tmp1,
      &ackRequested);
    tmp = tmp1;
  }
  else {
    tmp = kcg_false;
  }
  if (_L18.validatedbyRBC) {
    /* 1 */
    checkAcknowledgmentGeneral_trainData_pkg(
      trackMessages,
      &ackReceived,
      &IfBlock1_clock);
    tmp1 = ackReceived;
  }
  else {
    tmp1 = kcg_false;
  }
  ackReceived = tmp | tmp1;
  if (_L18.watingForRBCResponse) {
    tmp1 = ackRequested;
  }
  else {
    tmp1 = kcg_false;
  }
  if (_L18.validatedbyRBC) {
    tmp = IfBlock1_clock;
  }
  else {
    tmp = kcg_false;
  }
  ackRequested = tmp1 | tmp;
  IfBlock1_clock = ackReceived & ackRequested;
  /* 1 */
  trainDataStorage_trainData_pkg(
    reset,
    trainDatafromTIU,
    trainDatafromDriver,
    trainDataAckfromDriver,
    &_L18,
    eventsForTrainData,
    &outC->Context_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->actualTrainData,
    &outC->Context_1.actualTrainData);
  if (IfBlock1_clock) {
    /* 1 */
    sendAcknowledgementRBC_trainData_pkg(
      timeStamp,
      nidEngine,
      (*trackMessages).Radio_Common_Header.t_train,
      &outC->Context_1.updatedStatus,
      &outC->trainDataToRBC,
      &outC->updatedStatus);
  }
  else {
    tmp = ackReceived & !ackRequested;
    if (tmp) {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->updatedStatus,
        &outC->Context_1.updatedStatus);
      outC->updatedStatus.validatedbyRBC = kcg_true;
      outC->updatedStatus.watingForRBCResponse = kcg_false;
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->trainDataToRBC,
        (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
          &cNoMessage_trainData_pkg);
    }
    else {
      tmp1 = _L18.valid & _L18.validatedByDriver & !_L18.validatedbyRBC &
        !_L18.watingForRBCResponse &
        ((*eventsForTrainData).communicationSessionEstablished &
          (*eventsForTrainData).MoRCreadyFlag);
      if (tmp1) {
        /* 1 */
        sendValidTrainDataRBC_trainData_pkg(
          trainDatafromTIU,
          timeStamp,
          nidEngine,
          &outC->Context_1.updatedStatus,
          p0_positionReport,
          p1_positionReport,
          &outC->trainDataToRBC,
          &outC->updatedStatus);
      }
      else {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->updatedStatus,
          &outC->Context_1.updatedStatus);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->trainDataToRBC,
          (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
            &cNoMessage_trainData_pkg);
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageTrainData_trainData_pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

