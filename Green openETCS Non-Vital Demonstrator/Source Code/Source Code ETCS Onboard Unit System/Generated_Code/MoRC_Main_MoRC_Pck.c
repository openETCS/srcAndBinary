/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Main_MoRC_Pck.h"

#ifndef KCG_USER_DEFINED_INIT
void MoRC_Main_init_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
    kcg_true;
  outC->sendAPositionReport = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->orderTheRegistrationOfItsConnectedMobiles = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->InformTheDriverThatNoConnectionWasSetup = kcg_true;
  outC->requestTheSetupOfASafeRadioConnection = kcg_true;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
  outC->sessionSuccessfullyEstablished = kcg_true;
  outC->ready = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    outC->msgBus_out[i1].Message.valid = kcg_true;
    outC->msgBus_out[i1].Message.nid_message = 0;
    outC->msgBus_out[i1].Message.l_message = 0;
    outC->msgBus_out[i1].Message.t_train = 0;
    outC->msgBus_out[i1].Message.nid_engine = 0;
    outC->msgBus_out[i1].Message.field1 = 0;
    outC->msgBus_out[i1].Message.field2 = 0;
    outC->msgBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->msgBus_out[i1].OptionalPackets[i] = 0;
    }
  }
  outC->MessageToRBC.present = kcg_true;
  outC->MessageToRBC.header.present = kcg_true;
  outC->MessageToRBC.header.nid_message = 0;
  outC->MessageToRBC.header.t_train = 0;
  outC->MessageToRBC.header.nid_engine = 0;
  outC->MessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->MessageToRBC.header.xT_TRAIN = 0;
  outC->MessageToRBC.header.xNID_EM = 0;
  outC->MessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->MessageToRBC.header.xNID_TEXTMESSAGE = 0;
  outC->MessageToRBC.packets.p0.valid = kcg_true;
  outC->MessageToRBC.packets.p0.packet0.NID_PACKET = 0;
  outC->MessageToRBC.packets.p0.packet0.L_PACKET = 0;
  outC->MessageToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->MessageToRBC.packets.p0.packet0.NID_LRBG = 0;
  outC->MessageToRBC.packets.p0.packet0.D_LRBG = 0;
  outC->MessageToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->MessageToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->MessageToRBC.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->MessageToRBC.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->MessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->MessageToRBC.packets.p0.packet0.L_TRAININT = 0;
  outC->MessageToRBC.packets.p0.packet0.V_TRAIN = 0;
  outC->MessageToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->MessageToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->MessageToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->MessageToRBC.packets.p0.packet0.NID_NTC = 0;
  outC->MessageToRBC.packets.p1.valid = kcg_true;
  outC->MessageToRBC.packets.p1.packet1.NID_PACKET = 0;
  outC->MessageToRBC.packets.p1.packet1.L_PACKET = 0;
  outC->MessageToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->MessageToRBC.packets.p1.packet1.NID_LRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.D_LRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->MessageToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->MessageToRBC.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->MessageToRBC.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->MessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->MessageToRBC.packets.p1.packet1.L_TRAININT = 0;
  outC->MessageToRBC.packets.p1.packet1.V_TRAIN = 0;
  outC->MessageToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->MessageToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->MessageToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->MessageToRBC.packets.p1.packet1.NID_NTC = 0;
  outC->MessageToRBC.packets.p3.valid = kcg_true;
  outC->MessageToRBC.packets.p3.number = 0;
  outC->MessageToRBC.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i1 = 0; i1 < 15; i1++) {
    outC->MessageToRBC.packets.p3.aNID_RADIO[0].telephoneNumber[i1] = 0;
  }
  outC->MessageToRBC.packets.p4.valid = kcg_true;
  outC->MessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->MessageToRBC.packets.p5.valid = kcg_true;
  outC->MessageToRBC.packets.p5.TrainRunningNumber = 0;
  outC->MessageToRBC.packets.p9.valid = kcg_true;
  outC->MessageToRBC.packets.p9.transitionInformation = 0;
  outC->MessageToRBC.packets.p11.valid = kcg_true;
  outC->MessageToRBC.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->MessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->MessageToRBC.packets.p11.l_train = 0;
  outC->MessageToRBC.packets.p11.v_maxtrain = 0;
  outC->MessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->MessageToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->MessageToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->MessageToRBC.packets.p11.n_axle = 0;
  outC->MessageToRBC.packets.p11.nIter_tractionIdentity = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->MessageToRBC.packets.p11.tractionIdentity[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->MessageToRBC.packets.p11.tractionIdentity[i1].nid_ctraction = 0;
  }
  outC->MessageToRBC.packets.p11.nIter_ntc = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->MessageToRBC.packets.p11.nid_ntc[i1] = 0;
  }
  outC->sessionStatus = morc_st_inactive_Radio_Types_Pkg;
  outC->mobileSWStatus.valid = kcg_true;
  outC->mobileSWStatus.mobileHW_available = kcg_true;
  outC->mobileSWStatus.connectionStatus = mswc_unregistered_MoRC_Pck;
  outC->mobileSWStatus.registeredRadioNetworkID = 0;
  outC->mobileSWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->safeRadioConnectionStatus_toDriver.valid = kcg_true;
  outC->safeRadioConnectionStatus_toDriver.status = srcs_NoConnection_MoRC_Pck;
  outC->currentRadioNetworkID.valid = kcg_true;
  outC->currentRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->currentRadioNetworkID.nid_mn = 0;
  outC->cmdsToMobile.valid = kcg_true;
  outC->cmdsToMobile.action = mhwa_nop_MoRC_Pck;
  outC->cmdsToMobile.radioNetworkID = 0;
  outC->cmdsToMobile.nid_radio = 0;
  /* 1 */ genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_1);
  /* 2 */ managementOfRadioCommunication_init_MoRC_Pck(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_Main_reset_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC)
{
  /* 1 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_1);
  /* 2 */ managementOfRadioCommunication_reset_MoRC_Pck(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::MoRC_Main */
void MoRC_Main_MoRC_Pck(
  /* MoRC_Pck::MoRC_Main::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::MoRC_Main::mode */ M_MODE mode,
  /* MoRC_Pck::MoRC_Main::level */ M_LEVEL level,
  /* MoRC_Pck::MoRC_Main::obuEventsAndPhases */ obuEventsAndPhases_T_MoRC_Pck *obuEventsAndPhases,
  /* MoRC_Pck::MoRC_Main::radioNetworkIDs */ radioNetWorkIDs_T_MoRC_Pck *radioNetworkIDs,
  /* MoRC_Pck::MoRC_Main::statusOfMobile */ mobileHWStatus_Type_MoRC_Pck *statusOfMobile,
  /* MoRC_Pck::MoRC_Main::inMessage_new */ msgFromTrack_T_RCM_MsgTypes_Pkg *inMessage_new,
  /* MoRC_Pck::MoRC_Main::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MoRC_Pck::MoRC_Main::msgBus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBus_in,
  /* MoRC_Pck::MoRC_Main::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  /* MoRC_Pck::MoRC_Main::nid_engine */ NID_ENGINE nid_engine,
  /* MoRC_Pck::MoRC_Main::onboardPhoneNumbers */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *onboardPhoneNumbers,
  /* MoRC_Pck::MoRC_Main::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* MoRC_Pck::MoRC_Main::m_version */ M_VERSION m_version,
  outC_MoRC_Main_MoRC_Pck *outC)
{
  /* MoRC_Pck::MoRC_Main */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg mk_struct;
  /* MoRC_Pck::MoRC_Main */
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg tmp2;
  /* MoRC_Pck::MoRC_Main */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg tmp1;
  /* MoRC_Pck::MoRC_Main */
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg tmp;
  /* MoRC_Pck::MoRC_Main::p42_establish_or_terminate */
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg p42_establish_or_terminate;
  /* MoRC_Pck::MoRC_Main::m38_initiationOfACommunicationSession */
  static kcg_bool m38_initiationOfACommunicationSession;
  /* MoRC_Pck::MoRC_Main::m32_RBC_or_RIU_System_Version */
  static m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg m32_RBC_or_RIU_System_Version;
  /* MoRC_Pck::MoRC_Main::_L194 */
  static kcg_bool _L194;
  
  /* 2 */
  decP42_MoRC_Pck_Coder_Pkg(
    inMessage_new,
    (kcg_bool) (mode == M_MODE_Sleeping),
    &p42_establish_or_terminate);
  _L194 = (msrc_OBU_Common_Types_Pkg == p42_establish_or_terminate.source) |
    (p42_establish_or_terminate.source == msrc_Eurobalise_Common_Types_Pkg);
  m38_initiationOfACommunicationSession = /* 2 */
    decM38_MoRC_Pck_Coder_Pkg(inMessage_new);
  /* 2 */
  decM32_MoRC_Pck_Coder_Pkg(
    inMessage_new,
    (*obuEventsAndPhases).systemVersionFromTracksideSupported,
    &m32_RBC_or_RIU_System_Version);
  /* 2 */ decP45_MoRC_Pck_Coder_Pkg(inMessage_new, &tmp1);
  /* 3 */ if (_L194) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &tmp2,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &tmp,
      &p42_establish_or_terminate);
  }
  else {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &tmp2,
      &p42_establish_or_terminate);
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &tmp,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
  }
  /* 2 */
  managementOfRadioCommunication_MoRC_Pck(
    currentTime,
    /* 2 */ decM39_MoRC_Pck_Coder_Pkg(inMessage_new),
    &tmp2,
    (kcg_bool)
      (m38_initiationOfACommunicationSession |
        (p42_establish_or_terminate.establish &
          (p42_establish_or_terminate.source ==
            msrc_Euroradio_Common_Types_Pkg))),
    (kcg_bool)
      (p42_establish_or_terminate.establish &
        (p42_establish_or_terminate.source ==
          msrc_RadioInfillUnit_Common_Types_Pkg)),
    (kcg_bool)
      ((!m32_RBC_or_RIU_System_Version.systemVersionFromTracksideSupported &
          m32_RBC_or_RIU_System_Version.valid) |
        (*obuEventsAndPhases).errorConditionRequiringTerminationDetected),
    (*obuEventsAndPhases).trainIsRejectedByRBC_duringStartOfMission,
    (*obuEventsAndPhases).driverClosesTheDeskduringStartOfMission,
    (*obuEventsAndPhases).trainExitedFromAnRBCArea,
    (*obuEventsAndPhases).endOfMissionIsExecuted,
    (*obuEventsAndPhases).isInCommunicationSessionWithAnRIU,
    (*obuEventsAndPhases).atPowerUp,
    (*obuEventsAndPhases).atPowerDown,
    level,
    &(*radioNetworkIDs).memorizedID,
    &(*radioNetworkIDs).ID_fromDriver,
    &tmp1,
    (*obuEventsAndPhases).afterDriverEntryOfANewRadioNetworkID,
    (*obuEventsAndPhases).triggerDecisionThatNoRadioNetworkIDAvailable,
    statusOfMobile,
    (*obuEventsAndPhases).isPartOfAnOngoingStartOfMissionProcedure,
    (*obuEventsAndPhases).trainPassesALevelTransitionBorder,
    &tmp,
    p42_establish_or_terminate.establishOrderDoesNotRequestToContactAnAcceptingRBC,
    (*obuEventsAndPhases).trainPassesA_RBC_RBC_border_WithItsFrontEnd,
    m32_RBC_or_RIU_System_Version.systemVersionFromTracksideSupported,
    m32_RBC_or_RIU_System_Version.valid,
    mode,
    (*obuEventsAndPhases).atStartOfMission,
    (*obuEventsAndPhases).modeChangeHasToBeReportedToRBC,
    (*obuEventsAndPhases).driverHasManuallyChangedLevel,
    (*obuEventsAndPhases).trainFrontReachesEndOfAnnouncedRadioHole,
    (*obuEventsAndPhases).startOfMissionProcedureCompleted,
    (*obuEventsAndPhases).trainFrontInsideInAnAnnouncedRadioHole,
    (*obuEventsAndPhases).OBU_hasToEstablishANewSession,
    (*obuEventsAndPhases).startOfMissionProcedureIsGoingOn,
    m38_initiationOfACommunicationSession,
    &(*radioNetworkIDs).defaultID,
    connectionStatusTimerInterval,
    &outC->Context_2);
  outC->sendAPositionReport = outC->Context_2.sendAPositionReport;
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &outC->cmdsToMobile,
    &outC->Context_2.mobileHWCmd);
  outC->memorizeTheLastRadioNetworkID =
    outC->Context_2.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->currentRadioNetworkID,
    &outC->Context_2.currentRadioNetworkID);
  outC->orderTheRegistrationOfItsConnectedMobiles =
    outC->Context_2.orderTheRegistrationOfItsConnectedMobiles;
  outC->rejectOrderToContactRBC_or_RIU =
    outC->Context_2.rejectOrderToContactRBC_or_RIU;
  outC->InformTheDriverThatNoConnectionWasSetup =
    outC->Context_2.InformTheDriverThatNoConnectionWasSetup;
  outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
    outC->Context_2.ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession;
  kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck(
    &outC->safeRadioConnectionStatus_toDriver,
    &outC->Context_2.safeRadioConnectionStatus_toDriver);
  outC->sessionSuccessfullyEstablished =
    outC->Context_2.sessionSuccessfullyEstablished;
  kcg_copy_mobileSWStatus_Type_MoRC_Pck(
    &outC->mobileSWStatus,
    &outC->Context_2.mobileSWStatus);
  outC->requestTheSetupOfASafeRadioConnection =
    outC->Context_2.requestTheSetupOfASafeRadioConnection;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside =
    outC->Context_2.requestReleaseOfSafeRadioConnectionWithTrackside;
  outC->sessionStatus = outC->Context_2.sessionStatus;
  outC->ready = outC->Context_2.ready;
  /* ck_m155_initiationOfACommunicationSession */ if (outC->Context_2.sendTheMessageInitiationOfCommunicationSessionToTrackside) {
    /* 6 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co155_Initiation_of_a_communication_session_Id_Pkg,
      t_train,
      0,
      nid_engine,
      &outC->MessageToRBC);
  }
  else /* ck_anon_activ */ if (outC->Context_2.sendATerminationOfCommunicationMessage) {
    /* 8 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co156_Termination_of_a_communication_session_Id_Pkg,
      t_train,
      0,
      nid_engine,
      &outC->MessageToRBC);
  }
  else /* ck_anon_activ */ if (outC->Context_2.sendASessionEstablishedReportToTrackside) {
    /* 11 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co159_Session_established_Id_Pkg,
      t_train,
      0,
      nid_engine,
      &outC->MessageToRBC);
    kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &outC->MessageToRBC.packets.p3,
      onboardPhoneNumbers);
  }
  else /* ck_anon_activ */ if (outC->Context_2.sendMessage_NoCompatibleVersionSupported) {
    /* 13 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co154_No_Compatible_Version_Support_Id_Pkg,
      t_train,
      0,
      nid_engine,
      &outC->MessageToRBC);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->MessageToRBC,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cNoMessageToRBC_MoRC_Pck);
  }
  mk_struct.m155_initiationOfACommunicationSession =
    outC->Context_2.sendTheMessageInitiationOfCommunicationSessionToTrackside;
  mk_struct.m156_terminationOfACommunicationSession =
    outC->Context_2.sendATerminationOfCommunicationMessage;
  mk_struct.m159_sessionEstablished =
    outC->Context_2.sendASessionEstablishedReportToTrackside;
  mk_struct.m154_noCompatibleVersionSupported =
    outC->Context_2.sendMessage_NoCompatibleVersionSupported;
  /* 1 */
  genMsgToBus_RCM_Utils_Pkg_encoders(
    &mk_struct,
    t_train,
    t_train_global,
    msgBus_in,
    nid_engine,
    onboardPhoneNumbers_b,
    m_version,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_out,
    &outC->Context_1.msgBus_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_Main_MoRC_Pck.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

