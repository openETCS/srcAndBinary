/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Main_MoRC_Pck.h"

void MoRC_Main_reset_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC)
{
  /* 1 */ managementOfRadioCommunication_reset_MoRC_Pck(&outC->Context_1);
}

/* MoRC_Pck::MoRC_Main */
void MoRC_Main_MoRC_Pck(
  /* MoRC_Pck::MoRC_Main::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::MoRC_Main::mode */M_MODE mode,
  /* MoRC_Pck::MoRC_Main::level */M_LEVEL level,
  /* MoRC_Pck::MoRC_Main::obuEventsAndPhases */obuEventsAndPhases_T_MoRC_Pck *obuEventsAndPhases,
  /* MoRC_Pck::MoRC_Main::radioNetworkIDs */radioNetWorkIDs_T_MoRC_Pck *radioNetworkIDs,
  /* MoRC_Pck::MoRC_Main::statusOfMobile */mobileHWStatus_Type_MoRC_Pck *statusOfMobile,
  /* MoRC_Pck::MoRC_Main::inMessage */radioManagementMessage_T_Common_Types_Pkg *inMessage,
  /* MoRC_Pck::MoRC_Main::t_train */T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main::connectionStatusTimerInterval */time_Type_MoRC_Pck connectionStatusTimerInterval,
  /* MoRC_Pck::MoRC_Main::nid_engine */NID_ENGINE nid_engine,
  /* MoRC_Pck::MoRC_Main::onboardPhoneNumbers */PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *onboardPhoneNumbers,
  outC_MoRC_Main_MoRC_Pck *outC)
{
  static struct__79146 tmp;
  static P42_SessionManagement_T_Packet_Types_Pkg tmp4;
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg tmp3;
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg tmp2;
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg tmp1;
  /* MoRC_Pck::MoRC_Main::m38_initiationOfACommunicationSession */
  static kcg_bool m38_initiationOfACommunicationSession;
  /* MoRC_Pck::MoRC_Main::m32_RBC_or_RIU_System_Version */
  static m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg m32_RBC_or_RIU_System_Version;
  /* MoRC_Pck::MoRC_Main::_L15 */
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg _L15;
  /* MoRC_Pck::MoRC_Main::_L166 */
  static kcg_bool _L166;
  /* MoRC_Pck::MoRC_Main::_L194 */
  static kcg_bool _L194;
  
  m32_RBC_or_RIU_System_Version.version =
    (*inMessage).Radio_Common_Header.m_version;
  m32_RBC_or_RIU_System_Version.systemVersionFromTracksideSupported = kcg_true;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&tmp4, &(*inMessage).p42);
  tmp4.valid = (*inMessage).valid & (*inMessage).p42.valid;
  tmp.source = (*inMessage).messageSource;
  tmp.establishOrderDoesNotRequestToContactAnAcceptingRBC = kcg_false;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&tmp.p42, &tmp4);
  /* 1 */
  P42_Dec_MoRC_Pck_Coder_Pkg(&tmp, (kcg_bool) (mode == M_MODE_Sleeping), &_L15);
  _L194 = (msrc_OBU_Common_Types_Pkg == _L15.source) | (_L15.source ==
      msrc_Eurobalise_Common_Types_Pkg);
  _L166 = (*inMessage).valid & (((*inMessage).messageSource ==
        msrc_Euroradio_Common_Types_Pkg) | ((*inMessage).messageSource ==
        msrc_RadioInfillUnit_Common_Types_Pkg));
  m32_RBC_or_RIU_System_Version.valid = _L166 &
    ((*inMessage).Radio_Common_Header.nid_message ==
      cNID_MESSAGE_RBC_RIU_SystemVersion_MoRC_Pck);
  m38_initiationOfACommunicationSession = _L166 &
    ((*inMessage).Radio_Common_Header.nid_message ==
      cm38_Initiation_of_a_Communication_Session_Id_Pkg);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &tmp2,
    &(*inMessage).p45);
  tmp2.valid = (*inMessage).valid & (*inMessage).p45.valid;
  if (_L194) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &tmp3,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(&tmp1, &_L15);
  }
  else {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(&tmp3, &_L15);
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &tmp1,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
  }
  /* 1 */
  managementOfRadioCommunication_MoRC_Pck(
    currentTime,
    (kcg_bool)
      (_L166 & ((*inMessage).Radio_Common_Header.nid_message ==
          cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg)),
    &tmp3,
    (kcg_bool)
      (m38_initiationOfACommunicationSession | (_L15.establish & (_L15.source ==
            msrc_Euroradio_Common_Types_Pkg))),
    (kcg_bool)
      (_L15.establish & (_L15.source == msrc_RadioInfillUnit_Common_Types_Pkg)),
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
    &tmp2,
    (*obuEventsAndPhases).afterDriverEntryOfANewRadioNetworkID,
    (*obuEventsAndPhases).triggerDecisionThatNoRadioNetworkIDAvailable,
    statusOfMobile,
    (*obuEventsAndPhases).isPartOfAnOngoingStartOfMissionProcedure,
    (*obuEventsAndPhases).trainPassesALevelTransitionBorder,
    &tmp1,
    _L15.establishOrderDoesNotRequestToContactAnAcceptingRBC,
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
    &outC->Context_1);
  outC->sendAPositionReport = outC->Context_1.sendAPositionReport;
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &outC->cmdsToMobile,
    &outC->Context_1.mobileHWCmd);
  outC->memorizeTheLastRadioNetworkID =
    outC->Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->currentRadioNetworkID,
    &outC->Context_1.currentRadioNetworkID);
  outC->orderTheRegistrationOfItsConnectedMobiles =
    outC->Context_1.orderTheRegistrationOfItsConnectedMobiles;
  outC->rejectOrderToContactRBC_or_RIU =
    outC->Context_1.rejectOrderToContactRBC_or_RIU;
  outC->InformTheDriverThatNoConnectionWasSetup =
    outC->Context_1.InformTheDriverThatNoConnectionWasSetup;
  outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
    outC->Context_1.ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession;
  kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck(
    &outC->safeRadioConnectionStatus_toDriver,
    &outC->Context_1.safeRadioConnectionStatus_toDriver);
  outC->sessionSuccessfullyEstablished =
    outC->Context_1.sessionSuccessfullyEstablished;
  kcg_copy_mobileSWStatus_Type_MoRC_Pck(
    &outC->mobileSWStatus,
    &outC->Context_1.mobileSWStatus);
  outC->requestTheSetupOfASafeRadioConnection =
    outC->Context_1.requestTheSetupOfASafeRadioConnection;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside =
    outC->Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
  outC->sessionStatus = outC->Context_1.sessionStatus;
  outC->ready = outC->Context_1.ready;
  if (outC->Context_1.sendTheMessageInitiationOfCommunicationSessionToTrackside) {
    /* 6 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co155_Initiation_of_a_communication_session_Id_Pkg,
      t_train,
      0.0,
      nid_engine,
      &outC->MessageToRBC);
  }
  else if (outC->Context_1.sendATerminationOfCommunicationMessage) {
    /* 8 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co156_Termination_of_a_communication_session_Id_Pkg,
      t_train,
      0.0,
      nid_engine,
      &outC->MessageToRBC);
  }
  else if (outC->Context_1.sendASessionEstablishedReportToTrackside) {
    /* 11 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co159_Session_established_Id_Pkg,
      t_train,
      0.0,
      nid_engine,
      &outC->MessageToRBC);
    kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &outC->MessageToRBC.packets.p3,
      onboardPhoneNumbers);
  }
  else if (outC->Context_1.sendMessage_NoCompatibleVersionSupported) {
    /* 13 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co154_No_Compatible_Version_Support_Id_Pkg,
      t_train,
      0.0,
      nid_engine,
      &outC->MessageToRBC);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->MessageToRBC,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cNoMessageToRBC_MoRC_Pck);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_Main_MoRC_Pck.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

