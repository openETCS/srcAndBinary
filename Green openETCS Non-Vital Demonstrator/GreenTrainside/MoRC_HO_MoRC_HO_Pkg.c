/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_HO_MoRC_HO_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void MoRC_HO_init_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->bufferInformationFromAcceptingR = kcg_true;
  outC->trainPassesA_RBC_RBC_border_Wit = kcg_true;
  outC->triggerPositionReport = kcg_true;
  outC->triggerTrainData = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->infomDriverNoCompatibleVersionS = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->ready = kcg_true;
  outC->init = kcg_true;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->msgBus_2_RBC_2[i1].Message.valid = kcg_true;
    outC->msgBus_2_RBC_2[i1].Message.nid_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.l_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.t_train = 0;
    outC->msgBus_2_RBC_2[i1].Message.nid_engine = 0;
    outC->msgBus_2_RBC_2[i1].Message.field1 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field2 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field3 = 0;
    outC->msgBus_2_RBC_1[i1].Message.valid = kcg_true;
    outC->msgBus_2_RBC_1[i1].Message.nid_message = 0;
    outC->msgBus_2_RBC_1[i1].Message.l_message = 0;
    outC->msgBus_2_RBC_1[i1].Message.t_train = 0;
    outC->msgBus_2_RBC_1[i1].Message.nid_engine = 0;
    outC->msgBus_2_RBC_1[i1].Message.field1 = 0;
    outC->msgBus_2_RBC_1[i1].Message.field2 = 0;
    outC->msgBus_2_RBC_1[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->msgBus_2_RBC_2[i1].OptionalPackets[i] = 0;
      outC->msgBus_2_RBC_1[i1].OptionalPackets[i] = 0;
    }
  }
  outC->supervisingRBC.valid = kcg_true;
  outC->supervisingRBC.mobileDeviceNo = 0;
  outC->supervisingRBC.nid_c = 0;
  outC->supervisingRBC.nid_RBC = 0;
  outC->supervisingRBC.nid_radio = 0;
  outC->supervisingRBC.nid_mn = 0;
  outC->safeRadioIndication.valid = kcg_true;
  outC->safeRadioIndication.indicator = srci_noConnection_RCM_Session_T;
  outC->mobileRegistrationCmd_2.valid = kcg_true;
  outC->mobileRegistrationCmd_2.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd_2.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd_2.network_id = 0;
  outC->mobileRegistrationCmd_1.valid = kcg_true;
  outC->mobileRegistrationCmd_1.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd_1.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd_1.network_id = 0;
  outC->mobileConnectionCmd_2.valid = kcg_true;
  outC->mobileConnectionCmd_2.mobileDeviceNo = 0;
  outC->mobileConnectionCmd_2.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd_2.nid_radio = 0;
  outC->mobileConnectionCmd_1.valid = kcg_true;
  outC->mobileConnectionCmd_1.mobileDeviceNo = 0;
  outC->mobileConnectionCmd_1.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd_1.nid_radio = 0;
  outC->radioStatus_2.registration.valid = kcg_true;
  outC->radioStatus_2.registration.mobileDeviceNo = 0;
  outC->radioStatus_2.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->radioStatus_2.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->radioStatus_2.registration.nid_mn = 0;
  outC->radioStatus_2.connection.valid = kcg_true;
  outC->radioStatus_2.connection.mobileDeviceNo = 0;
  outC->radioStatus_2.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->radioStatus_2.connection.nid_radio = 0;
  outC->radioStatus_2.connection.settingUpConnectionHasFailed = kcg_true;
  outC->radioStatus_2.connection.connectionLost = kcg_true;
  outC->radioStatus_2.connection.isInRadioHole = kcg_true;
  outC->radioStatus_2.session.valid = kcg_true;
  outC->radioStatus_2.session.phase = sp_terminated_RCM_Session_Types;
  outC->radioStatus_2.session.nid_c = 0;
  outC->radioStatus_2.session.nid_rbc = 0;
  outC->radioStatus_2.session.nid_radio = 0;
  outC->radioStatus_1.registration.valid = kcg_true;
  outC->radioStatus_1.registration.mobileDeviceNo = 0;
  outC->radioStatus_1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->radioStatus_1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->radioStatus_1.registration.nid_mn = 0;
  outC->radioStatus_1.connection.valid = kcg_true;
  outC->radioStatus_1.connection.mobileDeviceNo = 0;
  outC->radioStatus_1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->radioStatus_1.connection.nid_radio = 0;
  outC->radioStatus_1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->radioStatus_1.connection.connectionLost = kcg_true;
  outC->radioStatus_1.connection.isInRadioHole = kcg_true;
  outC->radioStatus_1.session.valid = kcg_true;
  outC->radioStatus_1.session.phase = sp_terminated_RCM_Session_Types;
  outC->radioStatus_1.session.nid_c = 0;
  outC->radioStatus_1.session.nid_rbc = 0;
  outC->radioStatus_1.session.nid_radio = 0;
  /* 1 */ mobileBusRouter_out_init_Handov(&outC->_2_Context_1);
  /* 2 */ MoRC_Main_v2_init_MoRC_Pck(&outC->Context_2);
  /* 1 */ MoRC_Main_v2_init_MoRC_Pck(&outC->_1_Context_1);
  /* 1 */ processHandingOver_init_Handove(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_HO_reset_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ mobileBusRouter_out_reset_Hando(&outC->_2_Context_1);
  /* 2 */ MoRC_Main_v2_reset_MoRC_Pck(&outC->Context_2);
  /* 1 */ MoRC_Main_v2_reset_MoRC_Pck(&outC->_1_Context_1);
  /* 1 */ processHandingOver_reset_Handov(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_HO_Pkg::MoRC_HO */
void MoRC_HO_MoRC_HO_Pkg(
  /* MoRC_HO_Pkg::MoRC_HO::mode */ M_MODE mode,
  /* MoRC_HO_Pkg::MoRC_HO::level */ M_LEVEL level,
  /* MoRC_HO_Pkg::MoRC_HO::eventsAndPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsAndPhases,
  /* MoRC_HO_Pkg::MoRC_HO::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_ *atPowerUpRadioNetworkID,
  /* MoRC_HO_Pkg::MoRC_HO::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_ *newRadioNetworkIDFromDriver,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_1 */ mobileRegistrationContext_T_RCM *mobileRegistrationContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_2 */ mobileRegistrationContext_T_RCM *mobileRegistrationContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_1 */ mobileConnectionContext_T_RCM_T *mobileConnectionContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_2 */ mobileConnectionContext_T_RCM_T *mobileConnectionContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* MoRC_HO_Pkg::MoRC_HO::msgBusToRBC_in */ M_TrainTrackMessageBus_t_TM_Tra *msgBusToRBC_in,
  /* MoRC_HO_Pkg::MoRC_HO::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* MoRC_HO_Pkg::MoRC_HO::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* MoRC_HO_Pkg::MoRC_HO::t_train */ T_TRAIN t_train,
  /* MoRC_HO_Pkg::MoRC_HO::t_train_global */ T_internal_Type_Obu_BasicTypes_ t_train_global,
  /* MoRC_HO_Pkg::MoRC_HO::currentTime */ T_internal_Type_Obu_BasicTypes_ currentTime,
  /* MoRC_HO_Pkg::MoRC_HO::reset */ kcg_bool reset,
  /* MoRC_HO_Pkg::MoRC_HO::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* MoRC_HO_Pkg::MoRC_HO::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* MoRC_HO_Pkg::MoRC_HO::configData */ morc_configData_T_RCM_Session_T *configData,
  /* MoRC_HO_Pkg::MoRC_HO::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* MoRC_HO_Pkg::MoRC_HO::m_version */ M_VERSION m_version,
  outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  /* MoRC_HO_Pkg::MoRC_HO */
  static morcStatus_T_RCM_Session_Types_ tmp1;
  /* MoRC_HO_Pkg::MoRC_HO */
  static morcStatus_T_RCM_Session_Types_ tmp;
  
  /* last_init_ck_morcStatus_2 */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_morcStatus_T_RCM_Sessi(
      &tmp1,
      (morcStatus_T_RCM_Session_Types_ *) &cNoMoRCStatus_RCM_Session_Types);
    kcg_copy_morcStatus_T_RCM_Sessi(
      &tmp,
      (morcStatus_T_RCM_Session_Types_ *) &cNoMoRCStatus_RCM_Session_Types);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Sessi(&tmp1, &outC->radioStatus_1);
    kcg_copy_morcStatus_T_RCM_Sessi(&tmp, &outC->radioStatus_2);
  }
  /* 1 */
  processHandingOver_Handover_Pkg(
    mode,
    &tmp1,
    &tmp,
    dataFromTrack_in,
    trainPosition,
    BGs,
    sessionManagementAbility,
    trainProperties,
    &outC->Context_1);
  outC->triggerTrainData = outC->Context_1.sendTrainData_2_acceptingRBC;
  outC->bufferInformationFromAcceptingR =
    outC->Context_1.bufferInformationFromAcceptingR;
  kcg_copy_connection_ids_T_Hando(
    &outC->supervisingRBC,
    &outC->Context_1.supervisingRBC);
  outC->trainPassesA_RBC_RBC_border_Wit =
    outC->Context_1.trainPassesA_RBC_RBC_border_Wit;
  /* 1 */
  MoRC_Main_v2_MoRC_Pck(
    &outC->Context_1.sessionCmds_2_MoRC_1,
    eventsAndPhases,
    atPowerUpRadioNetworkID,
    newRadioNetworkIDFromDriver,
    mode,
    level,
    mobileRegistrationContext_1,
    mobileConnectionContext_1,
    currentTime,
    reset,
    t_train,
    configData,
    &outC->_1_Context_1);
  outC->rejectOrderToContactRBC_or_RIU =
    outC->_1_Context_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_morcStatus_T_RCM_Sessi(
    &outC->radioStatus_1,
    &outC->_1_Context_1.status);
  kcg_copy_safeRadioConnectionInd(
    &outC->safeRadioIndication,
    &outC->_1_Context_1.safeRadioIndication);
  kcg_copy_mobileConnectionCmd_T_(
    &outC->mobileConnectionCmd_1,
    &outC->_1_Context_1.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_(
    &outC->mobileRegistrationCmd_1,
    &outC->_1_Context_1.mobileRegistrationCmd);
  /* 2 */
  MoRC_Main_v2_MoRC_Pck(
    &outC->Context_1.sessionCmds_2_MoRC_2,
    eventsAndPhases,
    atPowerUpRadioNetworkID,
    newRadioNetworkIDFromDriver,
    mode,
    level,
    mobileRegistrationContext_2,
    mobileConnectionContext_2,
    currentTime,
    reset,
    t_train,
    configData,
    &outC->Context_2);
  kcg_copy_morcStatus_T_RCM_Sessi(
    &outC->radioStatus_2,
    &outC->Context_2.status);
  kcg_copy_mobileConnectionCmd_T_(
    &outC->mobileConnectionCmd_2,
    &outC->Context_2.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_(
    &outC->mobileRegistrationCmd_2,
    &outC->Context_2.mobileRegistrationCmd);
  outC->infomDriverNoCompatibleVersionS =
    outC->_1_Context_1.infomDriverNoCompatibleVersionS |
    outC->Context_2.infomDriverNoCompatibleVersionS;
  /* 1 */ if (outC->_1_Context_1.lastReceivedRadioNetworkID.valid) {
    kcg_copy_P45_RadioNetworkRegist(
      &outC->lastReceivedRadioNetworkID,
      &outC->_1_Context_1.lastReceivedRadioNetworkID);
  }
  else {
    kcg_copy_P45_RadioNetworkRegist(
      &outC->lastReceivedRadioNetworkID,
      &outC->Context_2.lastReceivedRadioNetworkID);
  }
  outC->memorizeTheLastRadioNetworkID =
    outC->_1_Context_1.memorizeTheLastRadioNetworkID |
    outC->Context_2.memorizeTheLastRadioNetworkID;
  outC->triggerPositionReport =
    outC->Context_1.sendPositionReport_2_acceptingR |
    outC->Context_1.sendPositionReport_2_handingOve |
    outC->_1_Context_1.sendAPositionReport |
    outC->Context_2.sendAPositionReport;
  outC->ready = !(outC->Context_1.notReady | outC->_1_Context_1.notReady |
      outC->Context_2.notReady);
  /* 1 */
  mobileBusRouter_out_Handover_Pk(
    &outC->_1_Context_1.msgToTrackTriggers,
    &outC->Context_2.msgToTrackTriggers,
    outC->Context_1.useInformationFromAcceptingRBC,
    outC->Context_1.handingOverMobile_is_mobile_1,
    outC->Context_1.sendPositionReport_2_acceptingR,
    outC->Context_1.sendPositionReport_2_handingOve,
    outC->_1_Context_1.sendAPositionReport,
    outC->Context_2.sendAPositionReport,
    outC->triggerTrainData,
    t_train,
    t_train_global,
    msgBusToRBC_in,
    sessionManagementAbility,
    (*configData).nid_engine,
    onboardPhoneNumbers_b,
    m_version,
    &outC->_2_Context_1);
  kcg_copy_M_TrainTrackMessageBus(
    &outC->msgBus_2_RBC_1,
    &outC->_2_Context_1.msgBus_2_RBC_1);
  kcg_copy_M_TrainTrackMessageBus(
    &outC->msgBus_2_RBC_2,
    &outC->_2_Context_1.msgBus_2_RBC_2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_HO_MoRC_HO_Pkg.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

