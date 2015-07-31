/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "managementOfRadioCommunication_MoRC_Pck.h"

void managementOfRadioCommunication_reset_MoRC_Pck(
  outC_managementOfRadioCommunication_MoRC_Pck *outC)
{
  outC->init = kcg_true;
  /* 5 */ EitherEdge_reset_digital(&outC->Context_5);
  /* 4 */ EitherEdge_reset_digital(&outC->Context_4);
  /* 3 */ EitherEdge_reset_digital(&outC->Context_3);
  /* 2 */ EitherEdge_reset_digital(&outC->Context_2);
  /* 1 */ EitherEdge_reset_digital(&outC->Context_1);
  /* 1 */
  safeRadioConnectionIndication_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 2 */ RisingEdge_reset_digital(&outC->_2_Context_2);
  /* 2 */ FallingEdge_reset_digital(&outC->_3_Context_2);
  /* 1 */ RisingEdge_reset_digital(&outC->_4_Context_1);
  /* 1 */
  registeringToTheRadioNetwork_reset_MoRC_Pck_Subfunc_Pkg(&outC->_5_Context_1);
  /* 1 */
  initiateTerminatingASession_reset_MoRC_Pck_Subfunc_Pkg(&outC->_6_Context_1);
  /* 1 */ FallingEdge_reset_digital(&outC->_7_Context_1);
  /* 1 */ initiate_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->_8_Context_1);
  /* 1 */
  terminating_a_CommunicationSession_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_9_Context_1);
  /* 2 */ establish_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->_10_Context_2);
  /* 1 */
  terminateAndEstablishSession_reset_MoRC_Pck_Subfunc_Pkg(&outC->_11_Context_1);
  /* 1 */
  maintaining_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->_12_Context_1);
}

/* MoRC_Pck::managementOfRadioCommunication */
void managementOfRadioCommunication_MoRC_Pck(
  /* MoRC_Pck::managementOfRadioCommunication::currentTime */time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::managementOfRadioCommunication::acknowledgementOfTerminationOfCommunicationSessionReceived */kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* MoRC_Pck::managementOfRadioCommunication::orderReceivedFromTrackside */p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderReceivedFromTrackside,
  /* MoRC_Pck::managementOfRadioCommunication::establishOrderReceivedFromRBC */kcg_bool establishOrderReceivedFromRBC,
  /* MoRC_Pck::managementOfRadioCommunication::establishOrderReceivedFromRadioInfillUnit */kcg_bool establishOrderReceivedFromRadioInfillUnit,
  /* MoRC_Pck::managementOfRadioCommunication::errorConditionRequiringTerminationDetected */kcg_bool errorConditionRequiringTerminationDetected,
  /* MoRC_Pck::managementOfRadioCommunication::trainIsRejectedByRBC_duringStartOfMission */kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* MoRC_Pck::managementOfRadioCommunication::driverClosesTheDeskduringStartOfMission */kcg_bool driverClosesTheDeskduringStartOfMission,
  /* MoRC_Pck::managementOfRadioCommunication::trainExitedFromAnRBCArea */kcg_bool trainExitedFromAnRBCArea,
  /* MoRC_Pck::managementOfRadioCommunication::endOfMissionIsExecuted */kcg_bool endOfMissionIsExecuted,
  /* MoRC_Pck::managementOfRadioCommunication::isInCommunicationSessionWithAnRIU */kcg_bool isInCommunicationSessionWithAnRIU,
  /* MoRC_Pck::managementOfRadioCommunication::atPowerUp */kcg_bool atPowerUp,
  /* MoRC_Pck::managementOfRadioCommunication::atPowerDown */kcg_bool atPowerDown,
  /* MoRC_Pck::managementOfRadioCommunication::level */M_LEVEL level,
  /* MoRC_Pck::managementOfRadioCommunication::RadioNetworkID_memorized */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_memorized,
  /* MoRC_Pck::managementOfRadioCommunication::RadioNetworkID_fromDriver */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_fromDriver,
  /* MoRC_Pck::managementOfRadioCommunication::RadioNetworkID_fromTrackside */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_fromTrackside,
  /* MoRC_Pck::managementOfRadioCommunication::afterDriverEntryOfANewRadioNetworkID */kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* MoRC_Pck::managementOfRadioCommunication::triggerDecisionThatNoRadioNetworkIDAvailable */kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* MoRC_Pck::managementOfRadioCommunication::mobileHWStatus */mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* MoRC_Pck::managementOfRadioCommunication::isPartOfAnOngoingStartOfMissionProcedure */kcg_bool isPartOfAnOngoingStartOfMissionProcedure,
  /* MoRC_Pck::managementOfRadioCommunication::trainPassesALevelTransitionBorder */kcg_bool trainPassesALevelTransitionBorder,
  /* MoRC_Pck::managementOfRadioCommunication::orderToEstablishACommunicationSession_fromOBU */p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderToEstablishACommunicationSession_fromOBU,
  /* MoRC_Pck::managementOfRadioCommunication::orderDoesNotRequestToContactAnAcceptingRBC */kcg_bool orderDoesNotRequestToContactAnAcceptingRBC,
  /* MoRC_Pck::managementOfRadioCommunication::trainPassesA_RBC_RBC_border_WithItsFrontEnd */kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd,
  /* MoRC_Pck::managementOfRadioCommunication::systemVersionFromTracksideSupported */kcg_bool systemVersionFromTracksideSupported,
  /* MoRC_Pck::managementOfRadioCommunication::systemVersionReceived */kcg_bool systemVersionReceived,
  /* MoRC_Pck::managementOfRadioCommunication::mode */M_MODE mode,
  /* MoRC_Pck::managementOfRadioCommunication::atStartOfMission */kcg_bool atStartOfMission,
  /* MoRC_Pck::managementOfRadioCommunication::modeChangeHasToBeReportedToRBC */kcg_bool modeChangeHasToBeReportedToRBC,
  /* MoRC_Pck::managementOfRadioCommunication::driverHasManuallyChangedLevel */kcg_bool driverHasManuallyChangedLevel,
  /* MoRC_Pck::managementOfRadioCommunication::trainFrontReachesEndOfAnnouncedRadioHole */kcg_bool trainFrontReachesEndOfAnnouncedRadioHole,
  /* MoRC_Pck::managementOfRadioCommunication::startOfMissionProcedureCompleted */kcg_bool startOfMissionProcedureCompleted,
  /* MoRC_Pck::managementOfRadioCommunication::trainFrontInsideInAnAnnouncedRadioHole */kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* MoRC_Pck::managementOfRadioCommunication::OBU_hasToEstablishANewSession */kcg_bool OBU_hasToEstablishANewSession,
  /* MoRC_Pck::managementOfRadioCommunication::startOfMissionProcedureIsGoingOn */kcg_bool startOfMissionProcedureIsGoingOn,
  /* MoRC_Pck::managementOfRadioCommunication::m38_initiationOfACommunicationSession */kcg_bool m38_initiationOfACommunicationSession,
  /* MoRC_Pck::managementOfRadioCommunication::RadioNetworkID_Default */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  /* MoRC_Pck::managementOfRadioCommunication::connectionStatusTimerInterval */time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_managementOfRadioCommunication_MoRC_Pck *outC)
{
  static mobileSWCmd_Type_MoRC_Pck tmp1;
  static kcg_bool tmp;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::NoSession::_L5 */
  static kcg_bool _L5_CommunicationSession_SM_NoSession;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Establishing */
  static kcg_bool br_1_guard_CommunicationSession_SM_Establishing;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L35 */
  static kcg_bool _L35_CommunicationSession_SM_Establishing;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L31 */
  static kcg_bool _L31_CommunicationSession_SM_Establishing;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L24 */
  static kcg_bool _L24_CommunicationSession_SM_Establishing;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L26 */
  static kcg_bool _L26_CommunicationSession_SM_Establishing;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L27 */
  static kcg_bool _L27_CommunicationSession_SM_Establishing;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L28 */
  static kcg_bool _L28_CommunicationSession_SM_Establishing;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining */
  static kcg_bool br_1_guard_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L1 */
  static kcg_bool _L1_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L4 */
  static kcg_bool _L4_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L5 */
  static kcg_bool _L5_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L12 */
  static kcg_bool _L12_CommunicationSession_SM_Terminating;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L2 */
  static kcg_bool _L2_CommunicationSession_SM_Terminating;
  /* MoRC_Pck::managementOfRadioCommunication::finalAttemptToSetupTheSafeRadioConnectionFailed */
  static kcg_bool last_finalAttemptToSetupTheSafeRadioConnectionFailed;
  /* MoRC_Pck::managementOfRadioCommunication::establishingACommunicationSessionAborted */
  static kcg_bool last_establishingACommunicationSessionAborted;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */
  static SSM_ST_CommunicationSession_SM CommunicationSession_SM_state_act;
  /* MoRC_Pck::managementOfRadioCommunication::requestsToSetupTheSafeRadioConnectionStopped */
  static kcg_bool requestsToSetupTheSafeRadioConnectionStopped;
  /* MoRC_Pck::managementOfRadioCommunication::firstRequestToSetupASafeRadioConnection */
  static kcg_bool firstRequestToSetupASafeRadioConnection;
  /* MoRC_Pck::managementOfRadioCommunication::_L85 */
  static kcg_bool _L85;
  /* MoRC_Pck::managementOfRadioCommunication::_L111 */
  static mobileSWStatus_Type_MoRC_Pck _L111;
  /* MoRC_Pck::managementOfRadioCommunication::_L113 */
  static sessionStatus_Type_Radio_Types_Pkg _L113;
  
  if (outC->init) {
    last_finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_false;
    _L85 = kcg_false;
    CommunicationSession_SM_state_act =
      SSM_st_NoSession_CommunicationSession_SM;
    kcg_copy_mobileSWStatus_Type_MoRC_Pck(
      &_L111,
      (mobileSWStatus_Type_MoRC_Pck *) &cInvalidMobileSWStatus_MoRC_Pck);
    _L113 = morc_st_inactive_Radio_Types_Pkg;
    br_1_guard_CommunicationSession_SM_Maintaining = kcg_false;
    br_1_guard_CommunicationSession_SM_Establishing = kcg_false;
  }
  else {
    CommunicationSession_SM_state_act = outC->CommunicationSession_SM_state_nxt;
    _L85 = outC->CommunicationSession_SM_reset_nxt;
    last_finalAttemptToSetupTheSafeRadioConnectionFailed =
      outC->sessionEstablished;
    kcg_copy_mobileSWStatus_Type_MoRC_Pck(&_L111, &outC->mobileSWStatus);
    _L113 = outC->sessionStatus;
    br_1_guard_CommunicationSession_SM_Establishing =
      outC->communicationSessionInitiatedByOBU;
    br_1_guard_CommunicationSession_SM_Maintaining =
      outC->communicationSessionInitiatedFromTrackside;
  }
  switch (CommunicationSession_SM_state_act) {
    case SSM_st_Terminating_CommunicationSession_SM :
      outC->sessionStatus = morc_st_terminating_Radio_Types_Pkg;
      break;
    case SSM_st_Maintaining_CommunicationSession_SM :
      if (_L85) {
        /* 1 */
        maintaining_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->_12_Context_1);
      }
      /* 1 */
      maintaining_a_Session_MoRC_Pck_Subfunc_Pkg(
        last_finalAttemptToSetupTheSafeRadioConnectionFailed,
        (kcg_bool)
          (_L111.valid & (mswc_registered_MoRC_Pck == _L111.connectionStatus)),
        (kcg_bool)
          (_L111.valid & (_L111.connectionStatus ==
              mswc_unregistered_MoRC_Pck)),
        kcg_true,
        trainFrontInsideInAnAnnouncedRadioHole,
        currentTime,
        &outC->_12_Context_1);
      _L1_CommunicationSession_SM_Maintaining =
        outC->_12_Context_1.tryToSetupANewSafeRadioConnection;
      last_establishingACommunicationSessionAborted =
        outC->_12_Context_1.informTheDriverThatNoConnectionWasSetup;
      tmp = outC->_12_Context_1.firstRequestToSetupASafeRadioConnection;
      _L4_CommunicationSession_SM_Maintaining =
        outC->_12_Context_1.finalAttemptToSetupTheSafeRadioConnectionFailed;
      _L5_CommunicationSession_SM_Maintaining =
        outC->_12_Context_1.requestsToSetupTheSafeRadioConnectionStopped;
      outC->sessionStatus = morc_st_maintaining_Radio_Types_Pkg;
      break;
    case SSM_st_Establishing_CommunicationSession_SM :
      outC->sessionStatus = morc_st_establishing_Radio_Types_Pkg;
      break;
    case SSM_st_NoSession_CommunicationSession_SM :
      outC->sessionStatus = morc_st_inactive_Radio_Types_Pkg;
      break;
    
  }
  /* 1 */
  terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg(
    orderReceivedFromTrackside,
    outC->sessionStatus,
    OBU_hasToEstablishANewSession,
    &outC->_11_Context_1);
  switch (CommunicationSession_SM_state_act) {
    case SSM_st_NoSession_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup = kcg_false;
      break;
    case SSM_st_Establishing_CommunicationSession_SM :
      if (_L85) {
        /* 2 */
        establish_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->_10_Context_2);
      }
      /* 2 */
      establish_a_Session_MoRC_Pck_Subfunc_Pkg(
        isPartOfAnOngoingStartOfMissionProcedure,
        (kcg_bool)
          (_L111.valid & (_L111.connectionStatus == mswc_registered_MoRC_Pck)),
        _L111.settingUpConnectionHasFailed,
        endOfMissionIsExecuted,
        trainPassesALevelTransitionBorder,
        &outC->_11_Context_1.newOrderToEstablishASession_out,
        orderToEstablishACommunicationSession_fromOBU,
        orderDoesNotRequestToContactAnAcceptingRBC,
        trainPassesA_RBC_RBC_border_WithItsFrontEnd,
        systemVersionFromTracksideSupported,
        systemVersionReceived,
        m38_initiationOfACommunicationSession,
        br_1_guard_CommunicationSession_SM_Establishing,
        br_1_guard_CommunicationSession_SM_Maintaining,
        &outC->_10_Context_2);
      firstRequestToSetupASafeRadioConnection =
        outC->_10_Context_2.requestTheSetupOfASafeRadioConnection;
      _L24_CommunicationSession_SM_Establishing =
        outC->_10_Context_2.terminateTheCommunicationSession;
      _L26_CommunicationSession_SM_Establishing =
        outC->_10_Context_2.firstRequestToSetupASafeRadioConnection;
      _L27_CommunicationSession_SM_Establishing =
        outC->_10_Context_2.finalAttemptToSetupTheSafeRadioConnectionFailed;
      _L28_CommunicationSession_SM_Establishing =
        outC->_10_Context_2.requestsToSetupTheSafeRadioConnectionStopped;
      _L31_CommunicationSession_SM_Establishing =
        outC->_10_Context_2.sessionSuccessfullyEstablished;
      _L35_CommunicationSession_SM_Establishing =
        outC->_10_Context_2.establishingACommunicationSessionAborted;
      outC->InformTheDriverThatNoConnectionWasSetup =
        outC->_10_Context_2.InformTheDriverThatNoConnectionWasSetup;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        outC->_10_Context_2.sendTheMessageInitiationOfCommunicationSessionToTrackside;
      outC->sendMessage_NoCompatibleVersionSupported =
        outC->_10_Context_2.sendMessage_NoCompatibleVersionSupported;
      outC->sendASessionEstablishedReportToTrackside =
        outC->_10_Context_2.sendASessionEstablishedReportToTrackside;
      break;
    case SSM_st_Maintaining_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup =
        last_establishingACommunicationSessionAborted;
      break;
    case SSM_st_Terminating_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup = kcg_false;
      break;
    
  }
  if (outC->init) {
    last_establishingACommunicationSessionAborted = kcg_false;
    _L5_CommunicationSession_SM_NoSession = kcg_false;
  }
  else {
    last_establishingACommunicationSessionAborted =
      outC->establishingACommunicationSessionAborted;
    _L5_CommunicationSession_SM_NoSession =
      outC->sessionSuccessfullyEstablished;
  }
  switch (CommunicationSession_SM_state_act) {
    case SSM_st_Terminating_CommunicationSession_SM :
      if (_L85) {
        /* 1 */
        terminating_a_CommunicationSession_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->_9_Context_1);
      }
      /* 1 */
      terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg(
        kcg_true,
        (kcg_bool) (morc_st_maintaining_Radio_Types_Pkg == _L113),
        acknowledgementOfTerminationOfCommunicationSessionReceived,
        (kcg_bool) (_L113 == morc_st_establishing_Radio_Types_Pkg),
        currentTime,
        last_establishingACommunicationSessionAborted,
        &outC->_9_Context_1);
      _L2_CommunicationSession_SM_Terminating =
        outC->_9_Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
      _L12_CommunicationSession_SM_Terminating =
        outC->_9_Context_1.communicationSessionTerminated;
      outC->sendATerminationOfCommunicationMessage =
        outC->_9_Context_1.sendATerminationOfCommunicationMessage;
      outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
        outC->_9_Context_1.ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished =
        _L5_CommunicationSession_SM_NoSession;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside =
        _L2_CommunicationSession_SM_Terminating;
      outC->sessionEstablished =
        last_finalAttemptToSetupTheSafeRadioConnectionFailed;
      break;
    case SSM_st_Maintaining_CommunicationSession_SM :
      outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished =
        _L5_CommunicationSession_SM_NoSession;
      outC->sessionEstablished =
        last_finalAttemptToSetupTheSafeRadioConnectionFailed;
      break;
    case SSM_st_Establishing_CommunicationSession_SM :
      outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->sessionSuccessfullyEstablished =
        _L31_CommunicationSession_SM_Establishing;
      outC->requestTheSetupOfASafeRadioConnection =
        firstRequestToSetupASafeRadioConnection;
      outC->sessionEstablished = _L31_CommunicationSession_SM_Establishing;
      break;
    case SSM_st_NoSession_CommunicationSession_SM :
      outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->sessionEstablished = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      break;
    
  }
  if (outC->init) {
    outC->init = kcg_false;
    last_finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_false;
  }
  else {
    last_finalAttemptToSetupTheSafeRadioConnectionFailed =
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection;
  }
  switch (CommunicationSession_SM_state_act) {
    case SSM_st_NoSession_CommunicationSession_SM :
      firstRequestToSetupASafeRadioConnection = kcg_false;
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        last_finalAttemptToSetupTheSafeRadioConnectionFailed;
      if (_L85) {
        /* 1 */
        initiate_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->_8_Context_1);
      }
      /* 1 */
      initiate_a_Session_MoRC_Pck_Subfunc_Pkg(
        (*orderToEstablishACommunicationSession_fromOBU).establish,
        establishOrderReceivedFromRBC,
        establishOrderReceivedFromRadioInfillUnit,
        m38_initiationOfACommunicationSession,
        level,
        atStartOfMission,
        (kcg_bool)
          (establishOrderReceivedFromRBC |
            establishOrderReceivedFromRadioInfillUnit |
            m38_initiationOfACommunicationSession),
        mode,
        modeChangeHasToBeReportedToRBC,
        driverHasManuallyChangedLevel,
        trainFrontReachesEndOfAnnouncedRadioHole,
        outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
        startOfMissionProcedureCompleted,
        kcg_true,
        outC->_11_Context_1.initiateEstablishingNewSession,
        &outC->_8_Context_1);
      _L5_CommunicationSession_SM_NoSession =
        outC->_8_Context_1.initiate_a_communicationSession_Request;
      outC->communicationSessionInitiatedByOBU =
        outC->_8_Context_1.communicationSessionInitiatedByOBU_;
      outC->communicationSessionInitiatedFromTrackside =
        outC->_8_Context_1.communicationSessionInitiatedFromTrackside_;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      break;
    case SSM_st_Establishing_CommunicationSession_SM :
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        _L27_CommunicationSession_SM_Establishing;
      outC->communicationSessionInitiatedByOBU =
        br_1_guard_CommunicationSession_SM_Establishing;
      outC->communicationSessionInitiatedFromTrackside =
        br_1_guard_CommunicationSession_SM_Maintaining;
      outC->establishingACommunicationSessionAborted =
        _L35_CommunicationSession_SM_Establishing;
      requestsToSetupTheSafeRadioConnectionStopped =
        _L28_CommunicationSession_SM_Establishing;
      firstRequestToSetupASafeRadioConnection =
        _L26_CommunicationSession_SM_Establishing;
      break;
    case SSM_st_Maintaining_CommunicationSession_SM :
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        _L4_CommunicationSession_SM_Maintaining;
      outC->communicationSessionInitiatedByOBU =
        br_1_guard_CommunicationSession_SM_Establishing;
      outC->communicationSessionInitiatedFromTrackside =
        br_1_guard_CommunicationSession_SM_Maintaining;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      firstRequestToSetupASafeRadioConnection = tmp;
      break;
    case SSM_st_Terminating_CommunicationSession_SM :
      firstRequestToSetupASafeRadioConnection = kcg_false;
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        last_finalAttemptToSetupTheSafeRadioConnectionFailed;
      outC->communicationSessionInitiatedByOBU =
        br_1_guard_CommunicationSession_SM_Establishing;
      outC->communicationSessionInitiatedFromTrackside =
        br_1_guard_CommunicationSession_SM_Maintaining;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      break;
    
  }
  /* 1 */
  FallingEdge_digital(
    (kcg_bool) (level == M_LEVEL_Level_1),
    &outC->_7_Context_1);
  /* 1 */
  initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg(
    orderReceivedFromTrackside,
    errorConditionRequiringTerminationDetected,
    trainIsRejectedByRBC_duringStartOfMission,
    driverClosesTheDeskduringStartOfMission,
    trainExitedFromAnRBCArea,
    orderReceivedFromTrackside,
    currentTime,
    isInCommunicationSessionWithAnRIU,
    outC->_7_Context_1.FE_Output,
    endOfMissionIsExecuted,
    &outC->_6_Context_1);
  outC->sendAPositionReport = outC->_6_Context_1.sendAPositionReport;
  last_establishingACommunicationSessionAborted =
    outC->_6_Context_1.initiateTermination |
    outC->_11_Context_1.initiateTermination;
  switch (CommunicationSession_SM_state_act) {
    case SSM_st_Terminating_CommunicationSession_SM :
      outC->CommunicationSession_SM_reset_nxt =
        _L12_CommunicationSession_SM_Terminating;
      if (_L2_CommunicationSession_SM_Terminating) {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *)
            &cTerminateSafeRadioConnectionCmd_MoRC_Pck);
      }
      else {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
      }
      if (_L12_CommunicationSession_SM_Terminating) {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_NoSession_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    case SSM_st_Maintaining_CommunicationSession_SM :
      outC->CommunicationSession_SM_reset_nxt =
        last_establishingACommunicationSessionAborted;
      if (_L5_CommunicationSession_SM_Maintaining) {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *)
            &cTerminateSafeRadioConnectionCmd_MoRC_Pck);
      }
      else if (_L1_CommunicationSession_SM_Maintaining) {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *)
            &cRegisterSafeRadioConnectionCmd_MoRC_Pck);
      }
      else {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
      }
      if (last_establishingACommunicationSessionAborted) {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Maintaining_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    case SSM_st_Establishing_CommunicationSession_SM :
      br_1_guard_CommunicationSession_SM_Establishing =
        _L24_CommunicationSession_SM_Establishing |
        last_establishingACommunicationSessionAborted;
      kcg_copy_mobileSWCmd_Type_MoRC_Pck(
        &tmp1,
        (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
      if (br_1_guard_CommunicationSession_SM_Establishing) {
        outC->CommunicationSession_SM_reset_nxt = kcg_true;
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        if (_L31_CommunicationSession_SM_Establishing) {
          outC->CommunicationSession_SM_state_nxt =
            SSM_st_Maintaining_CommunicationSession_SM;
        }
        else {
          outC->CommunicationSession_SM_state_nxt =
            SSM_st_Establishing_CommunicationSession_SM;
        }
        outC->CommunicationSession_SM_reset_nxt =
          _L31_CommunicationSession_SM_Establishing;
        if (_L31_CommunicationSession_SM_Establishing) {
          tmp = kcg_true;
        }
        else {
          tmp = kcg_false;
        }
      }
      break;
    case SSM_st_NoSession_CommunicationSession_SM :
      outC->CommunicationSession_SM_reset_nxt =
        _L5_CommunicationSession_SM_NoSession;
      kcg_copy_mobileSWCmd_Type_MoRC_Pck(
        &tmp1,
        (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
      if (_L5_CommunicationSession_SM_NoSession) {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Establishing_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_NoSession_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    
  }
  /* 1 */
  registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg(
    atPowerUp,
    afterDriverEntryOfANewRadioNetworkID,
    level,
    outC->requestTheSetupOfASafeRadioConnection,
    requestsToSetupTheSafeRadioConnectionStopped,
    atPowerDown,
    RadioNetworkID_memorized,
    RadioNetworkID_fromDriver,
    RadioNetworkID_fromTrackside,
    triggerDecisionThatNoRadioNetworkIDAvailable,
    mobileHWStatus,
    &tmp1,
    RadioNetworkID_Default,
    &outC->_5_Context_1);
  outC->orderTheRegistrationOfItsConnectedMobiles =
    outC->_5_Context_1.orderTheRegistrationOfItsConnectedMobiles;
  outC->memorizeTheLastRadioNetworkID =
    outC->_5_Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->currentRadioNetworkID,
    &outC->_5_Context_1.actualRadioNetworkID);
  outC->rejectOrderToContactRBC_or_RIU =
    outC->_5_Context_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &outC->mobileHWCmd,
    &outC->_5_Context_1.mobileHWCmd);
  kcg_copy_mobileSWStatus_Type_MoRC_Pck(
    &outC->mobileSWStatus,
    &outC->_5_Context_1.mobileSWStatus);
  _L85 = outC->mobileSWStatus.connectionStatus == mswc_registered_MoRC_Pck;
  /* 1 */ RisingEdge_digital(_L85, &outC->_4_Context_1);
  /* 2 */ FallingEdge_digital(_L85, &outC->_3_Context_2);
  /* 2 */
  RisingEdge_digital(
    (kcg_bool)
      (outC->mobileSWStatus.connectionStatus == mswc_unregistered_MoRC_Pck),
    &outC->_2_Context_2);
  /* 1 */
  safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg(
    startOfMissionProcedureIsGoingOn,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    requestsToSetupTheSafeRadioConnectionStopped,
    (kcg_bool) (outC->mobileSWStatus.valid & outC->_4_Context_1.RE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid & outC->_3_Context_2.FE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid & outC->_2_Context_2.RE_Output),
    trainFrontInsideInAnAnnouncedRadioHole,
    currentTime,
    firstRequestToSetupASafeRadioConnection,
    firstRequestToSetupASafeRadioConnection,
    connectionStatusTimerInterval,
    &outC->_1_Context_1);
  kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck(
    &outC->safeRadioConnectionStatus_toDriver,
    &outC->_1_Context_1.connectionStatus);
  /* 1 */
  EitherEdge_digital(
    outC->communicationSessionInitiatedByOBU,
    &outC->Context_1);
  /* 2 */
  EitherEdge_digital(
    outC->communicationSessionInitiatedFromTrackside,
    &outC->Context_2);
  /* 3 */
  EitherEdge_digital(
    outC->establishingACommunicationSessionAborted,
    &outC->Context_3);
  /* 4 */
  EitherEdge_digital(
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    &outC->Context_4);
  /* 5 */ EitherEdge_digital(outC->sessionEstablished, &outC->Context_5);
  outC->ready = !(tmp | outC->Context_1.EE_Output | outC->Context_2.EE_Output |
      outC->Context_3.EE_Output | outC->Context_4.EE_Output |
      outC->Context_5.EE_Output | !kcg_comp_mobileSWStatus_Type_MoRC_Pck(
        &outC->mobileSWStatus,
        &_L111) | (outC->sessionStatus != _L113));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** managementOfRadioCommunication_MoRC_Pck.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

