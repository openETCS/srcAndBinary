/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
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
  /* MoRC_Pck::MoRC_Main::inMessage_new */genMessage_T_MoRC_Pck *inMessage_new,
  /* MoRC_Pck::MoRC_Main::t_train */T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main::connectionStatusTimerInterval */time_Type_MoRC_Pck connectionStatusTimerInterval,
  /* MoRC_Pck::MoRC_Main::nid_engine */NID_ENGINE nid_engine,
  /* MoRC_Pck::MoRC_Main::onboardPhoneNumbers */PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *onboardPhoneNumbers,
  outC_MoRC_Main_MoRC_Pck *outC)
{
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg tmp2;
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg tmp1;
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg tmp;
  /* MoRC_Pck::MoRC_Main::p42_establish_or_terminate */
  static p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg p42_establish_or_terminate;
  /* MoRC_Pck::MoRC_Main::m38_initiationOfACommunicationSession */
  static kcg_bool m38_initiationOfACommunicationSession;
  /* MoRC_Pck::MoRC_Main::m32_RBC_or_RIU_System_Version */
  static m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg m32_RBC_or_RIU_System_Version;
  /* MoRC_Pck::MoRC_Main::_L194 */
  static kcg_bool _L194;
  
  /* 1 */
  decP42_MoRC_Pck_Coder_Pkg(
    inMessage_new,
    (kcg_bool) (mode == M_MODE_Sleeping),
    &p42_establish_or_terminate);
  m38_initiationOfACommunicationSession = /* 1 */
    decM38_MoRC_Pck_Coder_Pkg(inMessage_new);
  /* 1 */
  decM32_MoRC_Pck_Coder_Pkg(
    inMessage_new,
    (*obuEventsAndPhases).systemVersionFromTracksideSupported,
    &m32_RBC_or_RIU_System_Version);
  _L194 = (msrc_OBU_Common_Types_Pkg == p42_establish_or_terminate.source) |
    (p42_establish_or_terminate.source == msrc_Eurobalise_Common_Types_Pkg);
  /* 1 */ decP45_MoRC_Pck_Coder_Pkg(inMessage_new, &tmp1);
  if (_L194) {
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
  /* 1 */
  managementOfRadioCommunication_MoRC_Pck(
    currentTime,
    /* 1 */ decM39_MoRC_Pck_Coder_Pkg(inMessage_new),
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
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

