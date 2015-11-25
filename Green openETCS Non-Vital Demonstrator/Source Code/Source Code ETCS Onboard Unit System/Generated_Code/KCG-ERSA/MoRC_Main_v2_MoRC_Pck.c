/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Main_v2_MoRC_Pck.h"

#ifndef KCG_USER_DEFINED_INIT
void MoRC_Main_v2_init_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  kcg_int i;
  
  outC->sendAPositionReport = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->notReady = kcg_true;
  outC->init = kcg_true;
  outC->sessionStatus_l.valid = kcg_true;
  outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus_l.nid_c = 0;
  outC->sessionStatus_l.nid_rbc = 0;
  outC->sessionStatus_l.nid_radio = 0;
  outC->registrationStatus_l.valid = kcg_true;
  outC->registrationStatus_l.mobileDeviceNo = 0;
  outC->registrationStatus_l.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->registrationStatus_l.status = mrs_unregistered_RCM_Types_Pkg;
  outC->registrationStatus_l.nid_mn = 0;
  outC->connectionStatus_l.valid = kcg_true;
  outC->connectionStatus_l.mobileDeviceNo = 0;
  outC->connectionStatus_l.status = mcs_disconnected_RCM_Types_Pkg;
  outC->connectionStatus_l.nid_radio = 0;
  outC->connectionStatus_l.settingUpConnectionHasFailed = kcg_true;
  outC->connectionStatus_l.connectionLost = kcg_true;
  outC->connectionStatus_l.isInRadioHole = kcg_true;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = 0;
  outC->mobileRegistrationCmd.valid = kcg_true;
  outC->mobileRegistrationCmd.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd.network_id = 0;
  outC->mobileConnectionCmd.valid = kcg_true;
  outC->mobileConnectionCmd.mobileDeviceNo = 0;
  outC->mobileConnectionCmd.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd.nid_radio = 0;
  outC->safeRadioIndication.valid = kcg_true;
  outC->safeRadioIndication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->status.registration.valid = kcg_true;
  outC->status.registration.mobileDeviceNo = 0;
  outC->status.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->status.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->status.registration.nid_mn = 0;
  outC->status.connection.valid = kcg_true;
  outC->status.connection.mobileDeviceNo = 0;
  outC->status.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->status.connection.nid_radio = 0;
  outC->status.connection.settingUpConnectionHasFailed = kcg_true;
  outC->status.connection.connectionLost = kcg_true;
  outC->status.connection.isInRadioHole = kcg_true;
  outC->status.session.valid = kcg_true;
  outC->status.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->status.session.nid_c = 0;
  outC->status.session.nid_rbc = 0;
  outC->status.session.nid_radio = 0;
  outC->msgToTrackTriggers.m155_initiationOfACommunicationSession = kcg_true;
  outC->msgToTrackTriggers.m156_terminationOfACommunicationSession = kcg_true;
  outC->msgToTrackTriggers.m159_sessionEstablished = kcg_true;
  outC->msgToTrackTriggers.m154_noCompatibleVersionSupported = kcg_true;
  outC->msgToRBC.present = kcg_true;
  outC->msgToRBC.header.present = kcg_true;
  outC->msgToRBC.header.nid_message = 0;
  outC->msgToRBC.header.t_train = 0;
  outC->msgToRBC.header.nid_engine = 0;
  outC->msgToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->msgToRBC.header.xT_TRAIN = 0;
  outC->msgToRBC.header.xNID_EM = 0;
  outC->msgToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->msgToRBC.header.xNID_TEXTMESSAGE = 0;
  outC->msgToRBC.packets.p0.valid = kcg_true;
  outC->msgToRBC.packets.p0.packet0.NID_PACKET = 0;
  outC->msgToRBC.packets.p0.packet0.L_PACKET = 0;
  outC->msgToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->msgToRBC.packets.p0.packet0.NID_LRBG = 0;
  outC->msgToRBC.packets.p0.packet0.D_LRBG = 0;
  outC->msgToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->msgToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->msgToRBC.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->msgToRBC.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->msgToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->msgToRBC.packets.p0.packet0.L_TRAININT = 0;
  outC->msgToRBC.packets.p0.packet0.V_TRAIN = 0;
  outC->msgToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->msgToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->msgToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->msgToRBC.packets.p0.packet0.NID_NTC = 0;
  outC->msgToRBC.packets.p1.valid = kcg_true;
  outC->msgToRBC.packets.p1.packet1.NID_PACKET = 0;
  outC->msgToRBC.packets.p1.packet1.L_PACKET = 0;
  outC->msgToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->msgToRBC.packets.p1.packet1.NID_LRBG = 0;
  outC->msgToRBC.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->msgToRBC.packets.p1.packet1.D_LRBG = 0;
  outC->msgToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->msgToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->msgToRBC.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->msgToRBC.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->msgToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->msgToRBC.packets.p1.packet1.L_TRAININT = 0;
  outC->msgToRBC.packets.p1.packet1.V_TRAIN = 0;
  outC->msgToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->msgToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->msgToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->msgToRBC.packets.p1.packet1.NID_NTC = 0;
  outC->msgToRBC.packets.p3.valid = kcg_true;
  outC->msgToRBC.packets.p3.number = 0;
  outC->msgToRBC.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->msgToRBC.packets.p3.aNID_RADIO[0].telephoneNumber[i] = 0;
  }
  outC->msgToRBC.packets.p4.valid = kcg_true;
  outC->msgToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->msgToRBC.packets.p5.valid = kcg_true;
  outC->msgToRBC.packets.p5.TrainRunningNumber = 0;
  outC->msgToRBC.packets.p9.valid = kcg_true;
  outC->msgToRBC.packets.p9.transitionInformation = 0;
  outC->msgToRBC.packets.p11.valid = kcg_true;
  outC->msgToRBC.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->msgToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->msgToRBC.packets.p11.l_train = 0;
  outC->msgToRBC.packets.p11.v_maxtrain = 0;
  outC->msgToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->msgToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->msgToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->msgToRBC.packets.p11.n_axle = 0;
  outC->msgToRBC.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->msgToRBC.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->msgToRBC.packets.p11.tractionIdentity[i].nid_ctraction = 0;
  }
  outC->msgToRBC.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->msgToRBC.packets.p11.nid_ntc[i] = 0;
  }
  /* 1 */
  safeRadioConnectionIndication_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->_4_Context_1);
  /* 1 */
  registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  requestRadioConnectionSetupFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1);
  /* 1 */ sessionSequencer_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */
  initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_Main_v2_reset_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  outC->init = kcg_true;
  /* 1 */
  safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_4_Context_1);
  /* 1 */
  registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1);
  /* 1 */ sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */
  initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::MoRC_Main_v2 */
void MoRC_Main_v2_MoRC_Pck(
  /* MoRC_Pck::MoRC_Main_v2::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* MoRC_Pck::MoRC_Main_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::MoRC_Main_v2::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_Pck::MoRC_Main_v2::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_Pck::MoRC_Main_v2::mode */ M_MODE mode,
  /* MoRC_Pck::MoRC_Main_v2::level */ M_LEVEL level,
  /* MoRC_Pck::MoRC_Main_v2::mobileRegistrationContext */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* MoRC_Pck::MoRC_Main_v2::mobileConnectionContext */ mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext,
  /* MoRC_Pck::MoRC_Main_v2::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::MoRC_Main_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::MoRC_Main_v2::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main_v2::configData */ morc_configData_T_RCM_Session_Types_Pkg *configData,
  outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  /* MoRC_Pck::MoRC_Main_v2 */ sessionCmd_T_RCM_Session_Types_Pkg tmp3;
  /* MoRC_Pck::MoRC_Main_v2 */ m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg tmp2;
  /* MoRC_Pck::MoRC_Main_v2 */ m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg tmp1;
  /* MoRC_Pck::MoRC_Main_v2 */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg tmp;
  /* MoRC_Pck::MoRC_Main_v2::p42_sessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg p42_sessionManagement;
  /* MoRC_Pck::MoRC_Main_v2::_L10 */ kcg_bool _L10;
  /* MoRC_Pck::MoRC_Main_v2::_L14 */ mobileConnectionContext_T_RCM_Types_Pkg _L14;
  /* MoRC_Pck::MoRC_Main_v2::_L26 */ mobileRegistrationContext_T_RCM_Types_Pkg _L26;
  /* MoRC_Pck::MoRC_Main_v2::_L27 */ sessionStatus_T_RCM_Session_Types_Pkg _L27;
  
  /* 2 */ dec_p42_RCM_Utils_Pkg_decoders(msg_in, &p42_sessionManagement);
  /* last_init_ck_registrationStatus_l */ if (outC->init) {
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
      &_L14,
      (mobileConnectionContext_T_RCM_Types_Pkg *)
        &cNoConnectionContext_RCM_Types_Pkg);
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &_L27,
      (sessionStatus_T_RCM_Session_Types_Pkg *)
        &cNoSessionStatus_RCM_Session_Types_Pkg);
    outC->init = kcg_false;
    kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
      &_L26,
      (mobileRegistrationContext_T_RCM_Types_Pkg *)
        &cNoMobileRegistrationContext_RCM_Types_Pkg);
  }
  else {
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
      &_L14,
      &outC->connectionStatus_l);
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &_L27,
      &outC->sessionStatus_l);
    kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
      &_L26,
      &outC->registrationStatus_l);
  }
  /* 1 */
  initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
    &p42_sessionManagement,
    eventsAndPhases,
    mode,
    &_L27,
    currentTime,
    reset,
    (*configData).maxWaitingTimeUntilTerminationOrderReceived,
    (*configData).noOfRetriesUntilTerminationOrderIsReceived,
    &outC->Context_1);
  outC->sendAPositionReport = outC->Context_1.sendAPositionReport;
  /* 1 */ dec_m38_RCM_Utils_Pkg_decoders(msg_in, &tmp2);
  /* 1 */
  initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
    mode,
    kcg_false,
    eventsAndPhases,
    &p42_sessionManagement,
    &tmp2,
    &_L26,
    &_L14,
    &_L27,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg,
    (*configData).nid_radio_shortNumberStoredOnboard,
    &tmp3);
  /* 1 */ dec_m39_RCM_Utils_Pkg_decoders(msg_in, &tmp1);
  /* 1 */ dec_m32_RCM_Utils_Pkg_decoders(msg_in, kcg_true, &tmp);
  /* 1 */
  sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
    &tmp3,
    &p42_sessionManagement,
    &tmp1,
    &tmp,
    &_L14,
    outC->Context_1.initiateTermination,
    currentTime,
    reset,
    (*configData).noOfRetriesOfSendingTerminationMessage,
    (*configData).maxWaitingTimeForAckMessageReceived,
    &outC->_1_Context_1);
  outC->msgToTrackTriggers.m155_initiationOfACommunicationSession =
    outC->_1_Context_1.send_m155_initiationOfACommunicationSession;
  outC->msgToTrackTriggers.m156_terminationOfACommunicationSession =
    outC->_1_Context_1.send_m156_TerminationOfCommunicationSession;
  outC->msgToTrackTriggers.m159_sessionEstablished =
    outC->_1_Context_1.send_m159_sessionEstablishedReport;
  outC->msgToTrackTriggers.m154_noCompatibleVersionSupported =
    outC->_1_Context_1.send_m154_noCompatibleVersionSupported;
  outC->infomDriverNoCompatibleVersionSupported =
    outC->_1_Context_1.infomDriverNoCompatibleVersionSupported;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus_l,
    &outC->_1_Context_1.sessionStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->status.session,
    &outC->sessionStatus_l);
  /* 1 */
  requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    mode,
    eventsAndPhases,
    &outC->_1_Context_1.p42_SessionManagement_out,
    &outC->sessionStatus_l,
    &_L26,
    &_L14,
    outC->_1_Context_1.requestSafeRadioConnectionSetup,
    outC->_1_Context_1.requestReleaseOfSafeRadioConnection,
    currentTime,
    reset,
    (*configData).maxTimeToMaintainCommSession,
    (*configData).noOfTriesToEstablishASafeRadioConnection,
    &outC->_2_Context_1);
  /* 1 */
  connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1.connectionCmd,
    mobileConnectionContext,
    &_L26,
    &outC->mobileConnectionCmd,
    &outC->connectionStatus_l,
    &_L10);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->status.connection,
    &outC->connectionStatus_l);
  /* 1 */
  registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
    atPowerUpRadioNetworkID,
    newRadioNetworkIDFromDriver,
    msg_in,
    level,
    eventsAndPhases,
    &outC->sessionStatus_l,
    &outC->connectionStatus_l,
    mobileRegistrationContext,
    reset,
    &(*configData).radioNetworkID_Default,
    &outC->_3_Context_1);
  outC->memorizeTheLastRadioNetworkID =
    outC->_3_Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID,
    &outC->_3_Context_1.lastReceivedRadioNetworkID);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd,
    &outC->_3_Context_1.mobileRegistrationCmd);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->registrationStatus_l,
    &outC->_3_Context_1.mobileRegistrationStatus);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->status.registration,
    &outC->registrationStatus_l);
  outC->rejectOrderToContactRBC_or_RIU = _L10 |
    outC->_3_Context_1.rejectOrderToContactRBC_or_RIU;
  /* 1 */
  safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->mobileConnectionCmd,
    &outC->connectionStatus_l,
    eventsAndPhases,
    currentTime,
    reset,
    (*configData).connectionStatusTimerInterval,
    &outC->_4_Context_1);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->safeRadioIndication,
    &outC->_4_Context_1.indication);
  /* ck_m155_initiationOfACommunicationSession */ if (outC->_1_Context_1.send_m155_initiationOfACommunicationSession) {
    /* 4 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co155_Initiation_of_a_communication_session_Id_Pkg,
      t_train,
      0,
      (*configData).nid_engine,
      &outC->msgToRBC);
  }
  else /* ck_anon_activ */ if (outC->_1_Context_1.send_m156_TerminationOfCommunicationSession) {
    /* 3 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co156_Termination_of_a_communication_session_Id_Pkg,
      t_train,
      0,
      (*configData).nid_engine,
      &outC->msgToRBC);
  }
  else /* ck_anon_activ */ if (outC->_1_Context_1.send_m159_sessionEstablishedReport) {
    /* 2 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co159_Session_established_Id_Pkg,
      t_train,
      0,
      (*configData).nid_engine,
      &outC->msgToRBC);
    kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &outC->msgToRBC.packets.p3,
      &(*configData).onboardPhoneNumbers);
  }
  else /* ck_anon_activ */ if (outC->_1_Context_1.send_m154_noCompatibleVersionSupported) {
    /* 1 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co154_No_Compatible_Version_Support_Id_Pkg,
      t_train,
      0,
      (*configData).nid_engine,
      &outC->msgToRBC);
  }
  else {
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
      &outC->msgToRBC,
      (msgToTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageToRBC_MoRC_Pck);
  }
  outC->notReady = outC->_1_Context_1.notReady |
    !kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
      &_L14,
      &outC->connectionStatus_l) |
    !kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
      &_L26,
      &outC->registrationStatus_l) |
    !kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
      &_L27,
      &outC->sessionStatus_l);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_Main_v2_MoRC_Pck.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

