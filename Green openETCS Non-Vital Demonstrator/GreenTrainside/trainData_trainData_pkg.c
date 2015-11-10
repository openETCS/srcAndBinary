/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainData_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void trainData_init_trainData_pkg(outC_trainData_trainData_pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = 0;
  outC->triggerFromTrainData.brakeTrigger = kcg_true;
  outC->triggerFromTrainData.driverRequestModify = kcg_true;
  outC->triggerFromTrainData.shortenLocationBasedInformation = kcg_true;
  outC->triggerFromTrainData.deleteMA = kcg_true;
  outC->triggerFromTrainData.trainLengthIncreased = kcg_true;
  outC->actualTrainData.valid = kcg_true;
  outC->actualTrainData.acknowledgedByDriver = kcg_true;
  outC->actualTrainData.trainCategory = NC_TRAIN_Train_does_not_belong_;
  outC->actualTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->actualTrainData.trainLength = 0;
  outC->actualTrainData.brakePerctage = 0;
  outC->actualTrainData.maxTrainSpeed = 0;
  outC->actualTrainData.loadingGauge = M_LOADINGGAUGE_The_train_does_n;
  outC->actualTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->actualTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->actualTrainData.axleNumber = 0;
  outC->actualTrainData.numberNationalSystems = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->outMessageBus[i1].Message.valid = kcg_true;
    outC->outMessageBus[i1].Message.nid_message = 0;
    outC->outMessageBus[i1].Message.l_message = 0;
    outC->outMessageBus[i1].Message.t_train = 0;
    outC->outMessageBus[i1].Message.nid_engine = 0;
    outC->outMessageBus[i1].Message.field1 = 0;
    outC->outMessageBus[i1].Message.field2 = 0;
    outC->outMessageBus[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->outMessageBus[i1].OptionalPackets[i] = 0;
    }
    outC->actualTrainData.nationSystems[i1] = 0;
  }
  outC->actualTrainData.numberTractionSystems = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->actualTrainData.tractionSystem[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->actualTrainData.tractionSystem[i1].nid_ctraction = 0;
  }
  /* 1 */ sendAcknowledgementRBC_init_tra(&outC->_2_Context_1);
  /* 1 */ sendValidTrainDataRBC_init_trai(&outC->_1_Context_1);
  /* 1 */ trainDataStorage_init_trainData(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trainData_reset_trainData_pkg(outC_trainData_trainData_pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ sendAcknowledgementRBC_reset_tr(&outC->_2_Context_1);
  /* 1 */ sendValidTrainDataRBC_reset_tra(&outC->_1_Context_1);
  /* 1 */ trainDataStorage_reset_trainDat(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::trainData */
void trainData_trainData_pkg(
  /* trainData_pkg::trainData::reset */ kcg_bool reset,
  /* trainData_pkg::trainData::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainData::trainDatafromDriver */ DMI_Train_Data_T_DMI_Messages_B *trainDatafromDriver,
  /* trainData_pkg::trainData::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messag *trainDataAckfromDriver,
  /* trainData_pkg::trainData::trackMessages */ ReceivedMessage_T_Common_Types_ *trackMessages,
  /* trainData_pkg::trainData::eventsForTrainData */ trainData_Events_T_trainData_Ty *eventsForTrainData,
  /* trainData_pkg::trainData::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::trainData::p0_positionReport */ PT0_PositionReport_T_Packet_Tra *p0_positionReport,
  /* trainData_pkg::trainData::p1_positionReport */ PT1_PositionReport_2BG_T_Packet *p1_positionReport,
  /* trainData_pkg::trainData::inMessageBus */ M_TrainTrackMessageBus_t_TM_Tra *inMessageBus,
  /* trainData_pkg::trainData::inVersion */ M_VERSION inVersion,
  /* trainData_pkg::trainData::t_train */ T_TRAIN t_train,
  outC_trainData_trainData_pkg *outC)
{
  /* trainData_pkg::trainData */
  static kcg_bool tmp;
  /* trainData_pkg::trainData::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* trainData_pkg::trainData::ackReceived */
  static kcg_bool ackReceived;
  /* trainData_pkg::trainData::ackRequested */
  static kcg_bool ackRequested;
  /* trainData_pkg::trainData::statusAfterCheck */
  static trainDataStatus_T_trainData_Typ statusAfterCheck;
  /* trainData_pkg::trainData::_L45 */
  static trainDataStatus_T_trainData_Typ _L45;
  
  kcg_copy_trainData_Trigger_T_tr(
    &outC->triggerFromTrainData,
    (trainData_Trigger_T_trainData_T *) &cNoTrigger_trainData_Types_pkg);
  /* last_init_ck_trainDataStatus */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_trainDataStatus_T_trai(
      &_L45,
      (trainDataStatus_T_trainData_Typ *) &cNoStates_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainDataStatus_T_trai(&_L45, &outC->updatedStatus);
  }
  tmp = !_L45.RBCsystemVersionOnboard;
  /* ck__L66 */ if (tmp) {
    /* 1 */
    checkRBCSystemVersion_trainData(trackMessages, &_L45, &statusAfterCheck);
  }
  else {
    kcg_copy_trainDataStatus_T_trai(&statusAfterCheck, &_L45);
  }
  /* ck__L21 */ if (statusAfterCheck.validatedbyRBC) {
    /* 1 */ checkAcknowledgmentGeneral_trai(trackMessages, &ackRequested, &tmp);
  }
  else {
    ackRequested = kcg_false;
    tmp = kcg_false;
  }
  /* ck__L46 */ if (_L45.waitingForRBCResponse) {
    /* 1 */
    checkRadioMessages_trainData_pk(
      trackMessages,
      &statusAfterCheck,
      &IfBlock1_clock,
      &else_clock_IfBlock1);
  }
  else {
    IfBlock1_clock = kcg_false;
    else_clock_IfBlock1 = kcg_false;
  }
  ackReceived = IfBlock1_clock | ackRequested;
  ackRequested = else_clock_IfBlock1 | tmp;
  IfBlock1_clock = ackReceived & ackRequested;
  /* 1 */
  trainDataStorage_trainData_pkg(
    reset,
    trainDatafromTIU,
    trainDatafromDriver,
    trainDataAckfromDriver,
    &statusAfterCheck,
    eventsForTrainData,
    &outC->Context_1);
  kcg_copy_trainData_T_TIU_Types_(
    &outC->actualTrainData,
    &outC->Context_1.actualTrainData);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 1 */
    sendAcknowledgementRBC_trainDat(
      t_train,
      nidEngine,
      (*trackMessages).Radio_Common_Header.t_train,
      &outC->Context_1.updatedStatus,
      inMessageBus,
      inVersion,
      &outC->_2_Context_1);
    kcg_copy_M_TrainTrackMessageBus(
      &outC->outMessageBus,
      &outC->_2_Context_1.outMessageBus);
    kcg_copy_trainDataStatus_T_trai(
      &outC->updatedStatus,
      &outC->_2_Context_1.updatedStatus);
  }
  else {
    else_clock_IfBlock1 = ackReceived & !ackRequested;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus(&outC->outMessageBus, inMessageBus);
      kcg_copy_trainDataStatus_T_trai(
        &outC->updatedStatus,
        &outC->Context_1.updatedStatus);
      outC->updatedStatus.validatedbyRBC = kcg_true;
      outC->updatedStatus.waitingForRBCResponse = kcg_false;
    }
    else {
      tmp = statusAfterCheck.valid & statusAfterCheck.validatedByDriver &
        !statusAfterCheck.validatedbyRBC &
        !statusAfterCheck.waitingForRBCResponse &
        statusAfterCheck.RBCsystemVersionOnboard &
        ((*eventsForTrainData).communicationSessionEstablished &
          (*eventsForTrainData).MoRCreadyFlag);
      /* ck_anon_activ */ if (tmp) {
        /* 1 */
        sendValidTrainDataRBC_trainData(
          trainDatafromTIU,
          t_train,
          nidEngine,
          &outC->Context_1.updatedStatus,
          p0_positionReport,
          p1_positionReport,
          inMessageBus,
          inVersion,
          &outC->_1_Context_1);
        kcg_copy_M_TrainTrackMessageBus(
          &outC->outMessageBus,
          &outC->_1_Context_1.outMessageBus);
        kcg_copy_trainDataStatus_T_trai(
          &outC->updatedStatus,
          &outC->_1_Context_1.updatedStatus);
      }
      else {
        kcg_copy_M_TrainTrackMessageBus(&outC->outMessageBus, inMessageBus);
        kcg_copy_trainDataStatus_T_trai(
          &outC->updatedStatus,
          &outC->Context_1.updatedStatus);
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trainData_trainData_pkg.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

