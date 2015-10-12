/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establish_a_Session_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void establish_a_Session_init_MoRC_Pck_Subfunc_Pkg(
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->InformTheDriverThatNoConnectionWasSetup = kcg_true;
  outC->requestTheSetupOfASafeRadioConnection = kcg_true;
  outC->sendTheMessageInitiationOfCommunicationSessionToTrackside = kcg_true;
  outC->sendMessage_NoCompatibleVersionSupported = kcg_true;
  outC->terminateTheCommunicationSession = kcg_true;
  outC->sendASessionEstablishedReportToTrackside = kcg_true;
  outC->firstRequestToSetupASafeRadioConnection = kcg_true;
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_true;
  outC->requestsToSetupTheSafeRadioConnectionStopped = kcg_true;
  outC->sessionSuccessfullyEstablished = kcg_true;
  outC->establishingACommunicationSessionAborted = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->EstablishmentOfACommunicationSession_SM_state_nxt =
    SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
  outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission =
    0;
  outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
    SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
  outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
    SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
  outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
    SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
}
#endif /* KCG_USER_DEFINED_INIT */


void establish_a_Session_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
void establish_a_Session_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::isPartOfAnOngoingStartOfMissionProcedure */ kcg_bool isPartOfAnOngoingStartOfMissionProcedure,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::connectionSuccessfullyEstablished */ kcg_bool connectionSuccessfullyEstablished,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::settingUpSafeConnectionHasFailed */ kcg_bool settingUpSafeConnectionHasFailed,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::endOfMissionIsPerformed */ kcg_bool endOfMissionIsPerformed,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::trainPassesALevelTransitionBorder */ kcg_bool trainPassesALevelTransitionBorder,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::orderToEstablishACommunicationSession_fromTrackside */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderToEstablishACommunicationSession_fromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::orderToEstablishACommunicationSession_fromOBU */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderToEstablishACommunicationSession_fromOBU,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::orderDoesNotRequestToContactAnAcceptingRBC */ kcg_bool orderDoesNotRequestToContactAnAcceptingRBC,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::systemVersionFromTracksideSupported */ kcg_bool systemVersionFromTracksideSupported,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::systemVersionReceived */ kcg_bool systemVersionReceived,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::m38_initiationOfACommunicationSession */ kcg_bool m38_initiationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::communicationSessionInitiatedByOBU_ */ kcg_bool communicationSessionInitiatedByOBU_,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::communicationSessionInitiatedFromTrackside_ */ kcg_bool communicationSessionInitiatedFromTrackside_,
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
  static kcg_int tmp6;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
  static kcg_int tmp5;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
  static kcg_bool tmp4;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
  static kcg_bool tmp3;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
  static kcg_bool tmp2;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
  static kcg_bool tmp1;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
  static SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
  static kcg_bool RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
  static SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
  static SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU */
  static kcg_bool RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission */
  static kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission */
  static kcg_bool TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
  static SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
  static SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission */
  static kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM::Start */
  static kcg_bool _7_br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupCon;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM::Retry */
  static kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission */
  static kcg_bool TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
  static SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
  static SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU */
  static kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */
  static SSM_ST_EstablishmentOfACommunicationSession_SM EstablishmentOfACommunicationSession_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */
  static SSM_ST_EstablishmentOfACommunicationSession_SM EstablishmentOfACommunicationSession_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */
  static kcg_bool EstablishmentOfACommunicationSession_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */
  static SSM_TR_EstablishmentOfACommunicationSession_SM EstablishmentOfACommunicationSession_SM_fired_strong;
  
  /* init_EstablishmentOfACommunicationSession_SM */ if (outC->init3) {
    outC->init3 = kcg_false;
    EstablishmentOfACommunicationSession_SM_state_sel =
      SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
  }
  else {
    EstablishmentOfACommunicationSession_SM_state_sel =
      outC->EstablishmentOfACommunicationSession_SM_state_nxt;
  }
  /* sel_EstablishmentOfACommunicationSession_SM */ switch (EstablishmentOfACommunicationSession_SM_state_sel) {
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_reset_act = kcg_false;
      tmp4 = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_reset_act =
        m38_initiationOfACommunicationSession;
      tmp4 = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      tmp1 = kcg_false;
      /* guard_WaitForMessage_InitiationOfCommunicationSession_FromTrackside */ if (m38_initiationOfACommunicationSession) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_fired_strong =
          SSM_TR_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_1_EstablishmentOfACommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_fired_strong =
          SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      if (connectionSuccessfullyEstablished) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_fired_strong =
          SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByTrackside_1_EstablishmentOfACommunicationSession_SM;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_fired_strong =
          SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
      }
      EstablishmentOfACommunicationSession_SM_reset_act =
        connectionSuccessfullyEstablished;
      tmp4 = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_reset_act = kcg_false;
      tmp4 = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_reset_act = kcg_true;
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_fired_strong =
        SSM_TR_NoCompatibleSystemVersionSupported_1_EstablishmentOfACommunicationSession_SM;
      tmp4 = kcg_true;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_reset_act = kcg_false;
      tmp4 = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      tmp2 = systemVersionFromTracksideSupported & systemVersionReceived;
      tmp3 = systemVersionReceived & !systemVersionFromTracksideSupported;
      tmp4 = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      tmp = kcg_false;
      /* guard_WaitForSystemVersionFromTrackSide */ if (tmp2) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_fired_strong =
          SSM_TR_WaitForSystemVersionFromTrackSide_1_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_reset_act = kcg_true;
        outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
        tmp1 = kcg_true;
      }
      else {
        EstablishmentOfACommunicationSession_SM_reset_act = tmp3;
        /* cb_anon_sm */ if (tmp3) {
          EstablishmentOfACommunicationSession_SM_state_act =
            SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
          EstablishmentOfACommunicationSession_SM_fired_strong =
            SSM_TR_WaitForSystemVersionFromTrackSide_2_EstablishmentOfACommunicationSession_SM;
          outC->sendMessage_NoCompatibleVersionSupported = kcg_true;
        }
        else {
          EstablishmentOfACommunicationSession_SM_state_act =
            SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
          EstablishmentOfACommunicationSession_SM_fired_strong =
            SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
        }
        tmp1 = kcg_false;
      }
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_reset_act =
        connectionSuccessfullyEstablished;
      tmp4 = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      /* guard_RequestSetupOfASafeRadioConnection_initiatedByOBU */ if (connectionSuccessfullyEstablished) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_fired_strong =
          SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_1_EstablishmentOfACommunicationSession_SM;
        outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
          kcg_true;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_fired_strong =
          SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
        outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
          kcg_false;
      }
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      tmp4 = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      /* guard_Idle */ if (communicationSessionInitiatedByOBU_) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_fired_strong =
          SSM_TR_Idle_1_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_reset_act = kcg_true;
        outC->firstRequestToSetupASafeRadioConnection = kcg_true;
      }
      else {
        EstablishmentOfACommunicationSession_SM_reset_act =
          communicationSessionInitiatedFromTrackside_;
        /* cb_anon_sm */ if (communicationSessionInitiatedFromTrackside_) {
          EstablishmentOfACommunicationSession_SM_state_act =
            SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
          EstablishmentOfACommunicationSession_SM_fired_strong =
            SSM_TR_Idle_2_EstablishmentOfACommunicationSession_SM;
          outC->firstRequestToSetupASafeRadioConnection = kcg_true;
        }
        else {
          EstablishmentOfACommunicationSession_SM_state_act =
            SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
          EstablishmentOfACommunicationSession_SM_fired_strong =
            SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          outC->firstRequestToSetupASafeRadioConnection = kcg_false;
        }
      }
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    
  }
  /* act_EstablishmentOfACommunicationSession_SM */ switch (EstablishmentOfACommunicationSession_SM_state_act) {
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      tmp2 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_true;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      tmp2 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      tmp2 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      tmp2 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      tmp2 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      tmp2 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_true;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      tmp2 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM =
        EstablishmentOfACommunicationSession_SM_fired_strong !=
        SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
      if (EstablishmentOfACommunicationSession_SM_reset_act) {
        outC->init2 = kcg_true;
      }
      /* init_RequestConnectionWithTrackSide_SM */ if (outC->init2) {
        RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
          SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
      }
      else {
        RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
      }
      /* sel_RequestConnectionWithTrackSide_SM */ switch (RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (connectionSuccessfullyEstablished) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            connectionSuccessfullyEstablished;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            kcg_false;
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (connectionSuccessfullyEstablished) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            connectionSuccessfullyEstablished;
          break;
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (isPartOfAnOngoingStartOfMissionProcedure) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_Start_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_Start_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            kcg_true;
          break;
        
      }
      /* act_RequestConnectionWithTrackSide_SM */ switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM =
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU !=
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          if (RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
            outC->init1 = kcg_true;
          }
          break;
        
      }
      if (EstablishmentOfACommunicationSession_SM_reset_act) {
        outC->init1 = kcg_true;
      }
      /* act_RequestConnectionWithTrackSide_SM */ switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          /* init_RepeatSetupConnection_SM */ if (outC->init1) {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
              SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
          }
          else {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM;
          }
          /* sel_RepeatSetupConnection_SM */ switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              _7_br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupCon =
                kcg_true;
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec =
                settingUpSafeConnectionHasFailed;
              break;
            
          }
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
            outC->init = kcg_true;
          }
          break;
        
      }
      if (EstablishmentOfACommunicationSession_SM_reset_act) {
        outC->init = kcg_true;
      }
      outC->sessionSuccessfullyEstablished = kcg_false;
      /* act_RequestConnectionWithTrackSide_SM */ switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          /* init_RepeatSetupConnection_SM */ if (outC->init) {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
              SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
          }
          else {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
          }
          TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM =
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU !=
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          tmp2 = kcg_false;
          /* strong_fired_TryToEstablishConnection_isNotPartOfStartOfMission */ if (TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          else {
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission =
              endOfMissionIsPerformed | trainPassesALevelTransitionBorder |
              trainPassesA_RBC_RBC_border_WithItsFrontEnd |
              (*orderToEstablishACommunicationSession_fromTrackside).terminate |
              ((*orderToEstablishACommunicationSession_fromTrackside).terminate &
                ((*orderToEstablishACommunicationSession_fromTrackside).nid_rbc !=
                  (*orderToEstablishACommunicationSession_fromOBU).nid_rbc) &
                (*orderToEstablishACommunicationSession_fromTrackside).establish &
                (*orderToEstablishACommunicationSession_fromOBU).establish &
                orderDoesNotRequestToContactAnAcceptingRBC);
            if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission) {
              outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            }
            else {
              outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            }
          }
          /* sel_RepeatSetupConnection_SM */ switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart) {
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              /* guard_Retry */ if (settingUpSafeConnectionHasFailed) {
                outC->requestTheSetupOfASafeRadioConnection = kcg_true;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
              }
              RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              outC->requestTheSetupOfASafeRadioConnection = kcg_true;
              RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            
          }
          /* act_RepeatSetupConnection_SM */ switch (RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            
          }
          outC->init = kcg_false;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          tmp2 = kcg_false;
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          tmp2 = kcg_false;
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          /* sel_RepeatSetupConnection_SM */ switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM) {
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              /* guard_Retry */ if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec) {
                outC->requestTheSetupOfASafeRadioConnection = kcg_true;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
              }
              RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              break;
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              if (_7_br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupCon) {
                outC->requestTheSetupOfASafeRadioConnection = kcg_true;
                RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
                RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              }
              break;
            
          }
          /* 1 */ if (outC->requestTheSetupOfASafeRadioConnection) {
            tmp6 = 1;
          }
          else {
            tmp6 = 0;
          }
          /* fby_1_init_2 */ if (outC->init1) {
            tmp5 = 0;
          }
          else {
            tmp5 =
              outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission;
          }
          outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission =
            tmp6 + tmp5;
          /* strong_fired_TryToEstablishConnection_isPartOfStartOfMission */ if (TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
            tmp2 = kcg_false;
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          else {
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission =
              outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission >=
              cMaxNoOfConnectionRetries_MoRC_Pck;
            if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission) {
              tmp2 = kcg_true;
              outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            }
            else {
              tmp2 = kcg_false;
              outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            }
          }
          /* act_RepeatSetupConnection_SM */ switch (RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              break;
            
          }
          outC->init1 = kcg_false;
          break;
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          tmp2 = kcg_false;
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          break;
        
      }
      /* strong_fired_RequestSetupOfASafeRadioConnection_initiatedByOBU */ if (RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM) {
        tmp3 = kcg_false;
        outC->EstablishmentOfACommunicationSession_SM_state_nxt =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
      }
      else {
        /* act_RequestConnectionWithTrackSide_SM */ switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
          case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            /* strong_fired_TryToEstablishConnection_isPartOfStartOfMission */ if (TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            else /* guard_TryToEstablishConnection_isPartOfStartOfMission */ if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_true;
            }
            else {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            break;
          case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            /* strong_fired_TryToEstablishConnection_isNotPartOfStartOfMission */ if (TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            else /* guard_TryToEstablishConnection_isNotPartOfStartOfMission */ if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_true;
            }
            else {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            break;
          
        }
        if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
          tmp3 = kcg_true;
          outC->EstablishmentOfACommunicationSession_SM_state_nxt =
            SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
        }
        else {
          tmp3 = kcg_false;
          outC->EstablishmentOfACommunicationSession_SM_state_nxt =
            SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
        }
      }
      outC->init2 = kcg_false;
      break;
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      tmp2 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
      break;
    
  }
  outC->terminateTheCommunicationSession = tmp4 | tmp3;
  outC->establishingACommunicationSessionAborted =
    outC->terminateTheCommunicationSession;
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed =
    outC->terminateTheCommunicationSession;
  outC->InformTheDriverThatNoConnectionWasSetup =
    outC->sendMessage_NoCompatibleVersionSupported | tmp2;
  outC->requestsToSetupTheSafeRadioConnectionStopped =
    outC->terminateTheCommunicationSession | connectionSuccessfullyEstablished;
  outC->sendASessionEstablishedReportToTrackside = tmp1 | tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establish_a_Session_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

