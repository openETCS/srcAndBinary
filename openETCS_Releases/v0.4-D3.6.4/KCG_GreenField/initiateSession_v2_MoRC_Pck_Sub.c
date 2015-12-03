/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateSession_v2_MoRC_Pck_Sub.h"

/* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
void initiateSession_v2_MoRC_Pck_Sub(
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::prevSessionTerminatedDueToLossOfSafeRadioConnection */ kcg_bool prevSessionTerminatedDueToLossO,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::m38_initiationOfACommunicationSessionMsg */ m38_initiationOfACommunicationS *_5_m38_initiationOfACommunicati,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::registrationStatus */ mobileRegistrationContext_T_RCM *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Typ *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::lastKnownRBC */ sessionStatus_T_RCM_Session_Typ *lastKnownRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio_shortNumberStoredOnboard */ NID_RADIO nid_radio_shortNumberStoredOnbo,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionEstablishCmd */ sessionCmd_T_RCM_Session_Types_ *sessionEstablishCmd)
{
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
  static kcg_bool tmp4;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
  static kcg_int tmp3;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
  static kcg_int tmp2;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
  static kcg_int tmp1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
  static RBC_Id_T_Common_Types_Pkg tmp;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::initiateSessionFromOBU */
  static kcg_bool initiateSessionFromOBU;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::initiateSessionFromRBC */
  static kcg_bool initiateSessionFromRBC;
  
  (*sessionEstablishCmd).q_rbc = Q_RBC_Establish_communication_s;
  kcg_copy_m38_initiationOfACommu(
    &(*sessionEstablishCmd).m38,
    _5_m38_initiationOfACommunicati);
  kcg_copy_p42_sessionManagement_(
    &(*sessionEstablishCmd).p42,
    p42_SessionManagement);
  tmp4 = (*sessionStatus).phase != sp_terminated_RCM_Session_Types;
  initiateSessionFromRBC = !(tmp4 & ((*sessionStatus).nid_c ==
        (*_5_m38_initiationOfACommunicati).origin.nid_c) &
      ((*sessionStatus).nid_rbc ==
        (*_5_m38_initiationOfACommunicati).origin.rbc_id)) &
    (*_5_m38_initiationOfACommunicati).origin.valid &
    (*_5_m38_initiationOfACommunicati).valid;
  (*sessionEstablishCmd).initiatedByRBC = initiateSessionFromRBC;
  IfBlock1_clock = (*registrationStatus).valid &
    ((*registrationStatus).status == mrs_registered_RCM_Types_Pkg);
  initiateSessionFromOBU =
    (((*eventsAndPhases).startOfMissionProcedureComplete |
        (*eventsAndPhases).atStartOfMission |
        (*eventsAndPhases).modeChangeHasToBeReportedToRBC |
        (*eventsAndPhases).driverHasManuallyChangedLevel_t |
        (*eventsAndPhases).trainFrontReachesEndOfAnnounced |
        prevSessionTerminatedDueToLossO) & (((*sessionStatus).phase ==
          sp_terminated_RCM_Session_Types) & (*sessionStatus).valid) &
      IfBlock1_clock) | (((msrc_OBU_Common_Types_Pkg ==
          (*p42_SessionManagement).msgSrc) |
        ((msrc_RadioInfillUnit_Common_Typ == (*p42_SessionManagement).msgSrc) |
          (msrc_Eurobalise_Common_Types_Pk == (*p42_SessionManagement).msgSrc) |
          (msrc_Euroradio_Common_Types_Pkg ==
            (*p42_SessionManagement).msgSrc))) &
      (/* validate_q_sleepsession_v2 */
        validate_q_sleepsession_v2_MoRC(p42_SessionManagement, mode) &
        (*p42_SessionManagement).valid & ((*p42_SessionManagement).q_rbc ==
          Q_RBC_Establish_communication_s) &
        !(((*p42_SessionManagement).nid_c == (*sessionStatus).nid_c) &
          ((*p42_SessionManagement).nid_RBC == (*sessionStatus).nid_rbc) &
          tmp4) & (*sessionStatus).valid) & IfBlock1_clock);
  (*sessionEstablishCmd).initiatedByOBU = initiateSessionFromOBU;
  IfBlock1_clock = initiateSessionFromOBU & (*p42_SessionManagement).valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L6_IfBlock1 = c_nid_RBC_contactLastKnownRBC__ ==
      (*p42_SessionManagement).nid_RBC;
    tmp3 = (*p42_SessionManagement).nid_c;
    /* 1 */ if (_L6_IfBlock1) {
      tmp4 = (*lastKnownRBC).valid;
      tmp2 = (*lastKnownRBC).nid_rbc;
    }
    else {
      tmp4 = kcg_true;
      tmp2 = (*p42_SessionManagement).nid_RBC;
    }
    /* 2 */ if (cNID_RADIO_useTheShortNumberSto ==
      (*p42_SessionManagement).nid_radio) {
      tmp1 = nid_radio_shortNumberStoredOnbo;
    }
    else {
      tmp1 = (*p42_SessionManagement).nid_radio;
    }
    kcg_copy_RBC_Id_T_Common_Types_(&tmp, &(*p42_SessionManagement).origin);
  }
  else /* ck_anon_activ */ if (initiateSessionFromOBU) {
    tmp4 = (*lastKnownRBC).valid;
    tmp3 = (*lastKnownRBC).nid_c;
    tmp2 = (*lastKnownRBC).nid_rbc;
    tmp1 = (*lastKnownRBC).nid_radio;
    kcg_copy_RBC_Id_T_Common_Types_(
      &tmp,
      (RBC_Id_T_Common_Types_Pkg *) &cNoOrigin_MoRC_Pck_Subfunc_Pkg);
  }
  else {
    else_clock_IfBlock1 = initiateSessionFromRBC &
      (*_5_m38_initiationOfACommunicati).valid;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      tmp4 = (*_5_m38_initiationOfACommunicati).origin.valid;
      tmp3 = (*_5_m38_initiationOfACommunicati).origin.nid_c;
      tmp2 = (*_5_m38_initiationOfACommunicati).origin.rbc_id;
      tmp1 = (*connectionStatus).nid_radio;
      kcg_copy_RBC_Id_T_Common_Types_(
        &tmp,
        &(*_5_m38_initiationOfACommunicati).origin);
    }
    else {
      tmp4 = kcg_false;
      tmp3 = 0;
      tmp2 = 0;
      tmp1 = 0;
      kcg_copy_RBC_Id_T_Common_Types_(
        &tmp,
        (RBC_Id_T_Common_Types_Pkg *) &cNoOrigin_MoRC_Pck_Subfunc_Pkg);
    }
  }
  (*sessionEstablishCmd).valid = tmp4 & (initiateSessionFromRBC |
      initiateSessionFromOBU);
  (*sessionEstablishCmd).nid_c = tmp3;
  (*sessionEstablishCmd).nid_rbc = tmp2;
  (*sessionEstablishCmd).nid_radio = tmp1;
  kcg_copy_RBC_Id_T_Common_Types_(&(*sessionEstablishCmd).origin, &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initiateSession_v2_MoRC_Pck_Sub.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

