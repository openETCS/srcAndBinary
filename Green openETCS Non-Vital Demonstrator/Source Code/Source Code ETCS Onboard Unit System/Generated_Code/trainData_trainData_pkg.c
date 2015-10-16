/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
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
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = 0;
  outC->triggerFromTrainData.brakeTrigger = kcg_true;
  outC->triggerFromTrainData.driverRequestModify = kcg_true;
  outC->triggerFromTrainData.shortenLocationBasedInformation = kcg_true;
  outC->triggerFromTrainData.deleteMA = kcg_true;
  outC->triggerFromTrainData.trainLengthIncreased = kcg_true;
  outC->trainDataToRBC.present = kcg_true;
  outC->trainDataToRBC.header.present = kcg_true;
  outC->trainDataToRBC.header.nid_message = 0;
  outC->trainDataToRBC.header.t_train = 0;
  outC->trainDataToRBC.header.nid_engine = 0;
  outC->trainDataToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->trainDataToRBC.header.xT_TRAIN = 0;
  outC->trainDataToRBC.header.xNID_EM = 0;
  outC->trainDataToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->trainDataToRBC.header.xNID_TEXTMESSAGE = 0;
  outC->trainDataToRBC.packets.p0.valid = kcg_true;
  outC->trainDataToRBC.packets.p0.packet0.NID_PACKET = 0;
  outC->trainDataToRBC.packets.p0.packet0.L_PACKET = 0;
  outC->trainDataToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->trainDataToRBC.packets.p0.packet0.NID_LRBG = 0;
  outC->trainDataToRBC.packets.p0.packet0.D_LRBG = 0;
  outC->trainDataToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->trainDataToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->trainDataToRBC.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->trainDataToRBC.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->trainDataToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->trainDataToRBC.packets.p0.packet0.L_TRAININT = 0;
  outC->trainDataToRBC.packets.p0.packet0.V_TRAIN = 0;
  outC->trainDataToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->trainDataToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->trainDataToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->trainDataToRBC.packets.p0.packet0.NID_NTC = 0;
  outC->trainDataToRBC.packets.p1.valid = kcg_true;
  outC->trainDataToRBC.packets.p1.packet1.NID_PACKET = 0;
  outC->trainDataToRBC.packets.p1.packet1.L_PACKET = 0;
  outC->trainDataToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->trainDataToRBC.packets.p1.packet1.NID_LRBG = 0;
  outC->trainDataToRBC.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->trainDataToRBC.packets.p1.packet1.D_LRBG = 0;
  outC->trainDataToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->trainDataToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->trainDataToRBC.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->trainDataToRBC.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->trainDataToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->trainDataToRBC.packets.p1.packet1.L_TRAININT = 0;
  outC->trainDataToRBC.packets.p1.packet1.V_TRAIN = 0;
  outC->trainDataToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->trainDataToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->trainDataToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->trainDataToRBC.packets.p1.packet1.NID_NTC = 0;
  outC->trainDataToRBC.packets.p3.valid = kcg_true;
  outC->trainDataToRBC.packets.p3.number = 0;
  outC->trainDataToRBC.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i1 = 0; i1 < 15; i1++) {
    outC->trainDataToRBC.packets.p3.aNID_RADIO[0].telephoneNumber[i1] = 0;
  }
  outC->trainDataToRBC.packets.p4.valid = kcg_true;
  outC->trainDataToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->trainDataToRBC.packets.p5.valid = kcg_true;
  outC->trainDataToRBC.packets.p5.TrainRunningNumber = 0;
  outC->trainDataToRBC.packets.p9.valid = kcg_true;
  outC->trainDataToRBC.packets.p9.transitionInformation = 0;
  outC->trainDataToRBC.packets.p11.valid = kcg_true;
  outC->trainDataToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->trainDataToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->trainDataToRBC.packets.p11.l_train = 0;
  outC->trainDataToRBC.packets.p11.v_maxtrain = 0;
  outC->trainDataToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->trainDataToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->trainDataToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->trainDataToRBC.packets.p11.n_axle = 0;
  outC->trainDataToRBC.packets.p11.nIter_tractionIdentity = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->trainDataToRBC.packets.p11.tractionIdentity[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->trainDataToRBC.packets.p11.tractionIdentity[i1].nid_ctraction = 0;
  }
  outC->trainDataToRBC.packets.p11.nIter_ntc = 0;
  outC->actualTrainData.valid = kcg_true;
  outC->actualTrainData.acknowledgedByDriver = kcg_true;
  outC->actualTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->actualTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->actualTrainData.trainLength = 0;
  outC->actualTrainData.brakePerctage = 0;
  outC->actualTrainData.maxTrainSpeed = 0;
  outC->actualTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->actualTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->actualTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->actualTrainData.axleNumber = 0;
  outC->actualTrainData.numberNationalSystems = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->trainDataToRBC.packets.p11.nid_ntc[i1] = 0;
    outC->actualTrainData.nationSystems[i1] = 0;
  }
  outC->actualTrainData.numberTractionSystems = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->actualTrainData.tractionSystem[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->actualTrainData.tractionSystem[i1].nid_ctraction = 0;
  }
  /* 1 */ sendAcknowledgementRBC_init_trainData_pkg(&outC->_2_Context_1);
  /* 1 */ sendValidTrainDataRBC_init_trainData_pkg(&outC->_1_Context_1);
  /* 1 */ trainDataStorage_init_trainData_pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trainData_reset_trainData_pkg(outC_trainData_trainData_pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ sendAcknowledgementRBC_reset_trainData_pkg(&outC->_2_Context_1);
  /* 1 */ sendValidTrainDataRBC_reset_trainData_pkg(&outC->_1_Context_1);
  /* 1 */ trainDataStorage_reset_trainData_pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::trainData */
void trainData_trainData_pkg(
  /* trainData_pkg::trainData::reset */ kcg_bool reset,
  /* trainData_pkg::trainData::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainData::trainDatafromDriver */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainData::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainData::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::trainData::eventsForTrainData */ trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  /* trainData_pkg::trainData::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::trainData::p0_positionReport */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::trainData::p1_positionReport */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::trainData::inMessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *inMessageBus,
  /* trainData_pkg::trainData::inVersion */ M_VERSION inVersion,
  /* trainData_pkg::trainData::t_train */ T_TRAIN t_train,
  outC_trainData_trainData_pkg *outC)
{
  /* trainData_pkg::trainData::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* trainData_pkg::trainData::ackReceived */
  static kcg_bool ackReceived;
  /* trainData_pkg::trainData::ackRequested */
  static kcg_bool ackRequested;
  /* trainData_pkg::trainData::_L18 */
  static trainDataStatus_T_trainData_Types_pkg _L18;
  
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->triggerFromTrainData,
    (trainData_Trigger_T_trainData_Types_pkg *)
      &cNoTrigger_trainData_Types_pkg);
  /* last_init_ck_trainDataStatus */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L18,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L18, &outC->updatedStatus);
  }
  /* ck__L21 */ if (_L18.validatedbyRBC) {
    /* 1 */
    checkAcknowledgmentGeneral_trainData_pkg(
      trackMessages,
      &ackRequested,
      &else_clock_IfBlock1);
  }
  else {
    ackRequested = kcg_false;
    else_clock_IfBlock1 = kcg_false;
  }
  /* ck__L24 */ if (_L18.waitingForRBCResponse) {
    /* 1 */
    checkRadioMessages_trainData_pkg(
      trackMessages,
      &_L18,
      &IfBlock1_clock,
      &_1_else_clock_IfBlock1);
  }
  else {
    IfBlock1_clock = kcg_false;
    _1_else_clock_IfBlock1 = kcg_false;
  }
  ackReceived = IfBlock1_clock | ackRequested;
  ackRequested = _1_else_clock_IfBlock1 | else_clock_IfBlock1;
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
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 1 */
    sendAcknowledgementRBC_trainData_pkg(
      t_train,
      nidEngine,
      (*trackMessages).Radio_Common_Header.t_train,
      &outC->Context_1.updatedStatus,
      inMessageBus,
      inVersion,
      &outC->_2_Context_1);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->trainDataToRBC,
      &outC->_2_Context_1.trainDataToRBC);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->outMessageBus,
      &outC->_2_Context_1.outMessageBus);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->updatedStatus,
      &outC->_2_Context_1.updatedStatus);
  }
  else {
    _1_else_clock_IfBlock1 = ackReceived & !ackRequested;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->trainDataToRBC,
        (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
          &cNoMessage_trainData_pkg);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->outMessageBus,
        inMessageBus);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->updatedStatus,
        &outC->Context_1.updatedStatus);
      outC->updatedStatus.validatedbyRBC = kcg_true;
      outC->updatedStatus.waitingForRBCResponse = kcg_false;
    }
    else {
      else_clock_IfBlock1 = _L18.valid & _L18.validatedByDriver &
        !_L18.validatedbyRBC & !_L18.waitingForRBCResponse &
        ((*eventsForTrainData).communicationSessionEstablished &
          (*eventsForTrainData).MoRCreadyFlag);
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        /* 1 */
        sendValidTrainDataRBC_trainData_pkg(
          trainDatafromTIU,
          t_train,
          nidEngine,
          &outC->Context_1.updatedStatus,
          p0_positionReport,
          p1_positionReport,
          inMessageBus,
          inVersion,
          &outC->_1_Context_1);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->trainDataToRBC,
          &outC->_1_Context_1.trainDataToRBC);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->outMessageBus,
          &outC->_1_Context_1.outMessageBus);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->updatedStatus,
          &outC->_1_Context_1.updatedStatus);
      }
      else {
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->trainDataToRBC,
          (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
            &cNoMessage_trainData_pkg);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->outMessageBus,
          inMessageBus);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->updatedStatus,
          &outC->Context_1.updatedStatus);
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trainData_trainData_pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

