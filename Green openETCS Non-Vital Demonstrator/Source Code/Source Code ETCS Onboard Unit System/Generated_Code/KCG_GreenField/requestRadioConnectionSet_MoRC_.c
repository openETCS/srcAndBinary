/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "requestRadioConnectionSet_MoRC_.h"

#ifndef KCG_USER_DEFINED_INIT
void requestRadioConnectionSet_init_(outC_requestRadioConnectionSet_ *outC)
{
  outC->init = kcg_true;
  outC->p42_sessionManagement_mem.valid = kcg_true;
  outC->p42_sessionManagement_mem.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionManagement_mem.q_dir = Q_DIR_Reverse;
  outC->p42_sessionManagement_mem.q_rbc = Q_RBC_Terminate_communication_s;
  outC->p42_sessionManagement_mem.nid_c = 0;
  outC->p42_sessionManagement_mem.nid_RBC = 0;
  outC->p42_sessionManagement_mem.nid_radio = 0;
  outC->p42_sessionManagement_mem.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_e;
  outC->p42_sessionManagement_mem.origin.valid = kcg_true;
  outC->p42_sessionManagement_mem.origin.nid_c = 0;
  outC->p42_sessionManagement_mem.origin.rbc_id = 0;
  outC->p42_sessionManagement_mem.origin.device_id = 0;
  outC->repeat_SM_state_nxt = SSM_st_rep_inactive_repeat_SM;
  outC->connectionCmd.valid = kcg_true;
  outC->connectionCmd.mobileDeviceNo = 0;
  outC->connectionCmd.action = mca_nop_RCM_Types_Pkg;
  outC->connectionCmd.nid_radio = 0;
  /* 1 */ RisingEdge_init_digital(&outC->_1_Context_1);
  /* 1 */ countDownTimer_init_MoRC_Pck_Ut(&outC->Context_1);
  /* 2 */ RisingEdge_init_digital(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void requestRadioConnectionSet_reset(outC_requestRadioConnectionSet_ *outC)
{
  outC->init = kcg_true;
  /* 1 */ RisingEdge_reset_digital(&outC->_1_Context_1);
  /* 1 */ countDownTimer_reset_MoRC_Pck_U(&outC->Context_1);
  /* 2 */ RisingEdge_reset_digital(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2 */
void requestRadioConnectionSet_MoRC_(
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::eventsPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsPhases,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::p42_sessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_sessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::sessionStatus */ sessionStatus_T_RCM_Session_Typ *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::registrationStatus */ mobileRegistrationContext_T_RCM *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connect */ kcg_bool connect,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::disconnect */ kcg_bool disconnect,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::currentTime */ T_internal_Type_Obu_BasicTypes_ currentTime,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::maxTimeToMaintainCommSession */ T_internal_Type_Obu_BasicTypes_ maxTimeToMaintainCommSession,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::noOfRetriesToEstablishASafeRadioConnection */ kcg_int noOfRetriesToEstablishASafeRadi,
  outC_requestRadioConnectionSet_ *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_inactive */
  static kcg_bool br_1_guard_repeat_SM_rep_inacti;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_inactive */
  static kcg_bool br_2_clock_repeat_SM_rep_inacti;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool _2_br_1_guard_repeat_SM_rep_rep;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool _1_br_2_clock_repeat_SM_rep_rep;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilStopConditionMet */
  static kcg_bool br_1_guard_repeat_SM_rep_repeat;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilStopConditionMet */
  static kcg_bool br_2_clock_repeat_SM_rep_repeat;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM repeat_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM repeat_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeatUntilStopConditionMet */
  static kcg_bool repeatUntilStopConditionMet;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::successfullyConnected */
  static kcg_bool successfullyConnected;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L336 */
  static kcg_bool _L336;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L334 */
  static kcg_bool _L334;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L321 */
  static kcg_bool _L321;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L318 */
  static kcg_bool _L318;
  
  else_clock_IfBlock1 = (*registrationStatus).valid &
    ((*registrationStatus).status == mrs_registered_RCM_Types_Pkg);
  repeatUntilStopConditionMet = connect &
    !(*eventsPhases).isPartOfAnOngoingStartOfMission & else_clock_IfBlock1;
  successfullyConnected = (*connectionStatus).valid &
    ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg);
  _L318 = ((*p42_sessionManagement).msgSrc == msrc_Euroradio_Common_Types_Pkg) |
    ((*p42_sessionManagement).msgSrc == msrc_Eurobalise_Common_Types_Pk) |
    ((*p42_sessionManagement).msgSrc == msrc_RadioInfillUnit_Common_Typ) |
    ((*p42_sessionManagement).msgSrc == msrc_OBU_Common_Types_Pkg);
  _L321 = (*p42_sessionManagement).q_rbc == Q_RBC_Establish_communication_s;
  _L334 = /* 2 */ validate_q_sleepsession_v2_MoRC(p42_sessionManagement, mode);
  _L336 = !(((*p42_sessionManagement).nid_c == (*sessionStatus).nid_c) &
      ((*sessionStatus).nid_rbc == (*p42_sessionManagement).nid_RBC)) &
    (*sessionStatus).valid & ((*sessionStatus).phase !=
      sp_terminated_RCM_Session_Types);
  /* init_repeat_SM */ if (outC->init) {
    repeat_SM_state_sel = SSM_st_rep_inactive_repeat_SM;
  }
  else {
    repeat_SM_state_sel = outC->repeat_SM_state_nxt;
  }
  /* 2 */
  RisingEdge_digital(
    (kcg_bool) ((*connectionStatus).valid & (*connectionStatus).connectionLost),
    &outC->Context_2);
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    outC->Context_2.RE_Output,
    (kcg_bool)
      ((*connectionStatus).valid & !(*connectionStatus).connectionLost),
    currentTime,
    kcg_false,
    maxTimeToMaintainCommSession,
    &outC->Context_1);
  /* 1 */
  RisingEdge_digital(
    (kcg_bool)
      ((*connectionStatus).settingUpConnectionHasFailed &
        (*connectionStatus).valid),
    &outC->_1_Context_1);
  /* sel_repeat_SM */ switch (repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilStopCondi :
      br_1_guard_repeat_SM_rep_repeat = successfullyConnected |
        (*eventsPhases).endOfMissionIsExecuted |
        (*eventsPhases).trainFrontPassesALevelTransitio |
        (*eventsPhases).trainFrontPassesA_RBC_RBC_borde |
        (*eventsPhases).trainFrontPassesStartOfAnnounce |
        ((*p42_sessionManagement).valid & ((*p42_sessionManagement).q_rbc ==
            Q_RBC_Terminate_communication_s) & _L334 & _L318) |
        ((*p42_sessionManagement).valid & _L321 & _L334 & _L318 & _L336) |
        outC->Context_1.expired | reset;
      /* guard_rep_repeatUntilStopConditionMet */ if (br_1_guard_repeat_SM_rep_repeat) {
        repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
      }
      else {
        repeat_SM_state_act = SSM_st_rep_repeatUntilStopCondi;
        br_2_clock_repeat_SM_rep_repeat = outC->_1_Context_1.RE_Output;
      }
      break;
    case SSM_st_rep_repeatUntilSuccessfu :
      _2_br_1_guard_repeat_SM_rep_rep = successfullyConnected | reset;
      /* guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */ if (_2_br_1_guard_repeat_SM_rep_rep) {
        repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
      }
      else {
        repeat_SM_state_act = SSM_st_rep_repeatUntilSuccessfu;
        _1_br_2_clock_repeat_SM_rep_rep = outC->_1_Context_1.RE_Output;
      }
      break;
    case SSM_st_rep_inactive_repeat_SM :
      br_1_guard_repeat_SM_rep_inacti = connect &
        (*eventsPhases).isPartOfAnOngoingStartOfMission & else_clock_IfBlock1;
      /* guard_rep_inactive */ if (br_1_guard_repeat_SM_rep_inacti) {
        repeat_SM_state_act = SSM_st_rep_repeatUntilSuccessfu;
      }
      else {
        if (repeatUntilStopConditionMet) {
          repeat_SM_state_act = SSM_st_rep_repeatUntilStopCondi;
        }
        else {
          repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
        }
        br_2_clock_repeat_SM_rep_inacti = repeatUntilStopConditionMet;
      }
      break;
    
  }
  /* act_repeat_SM */ switch (repeat_SM_state_act) {
    case SSM_st_rep_inactive_repeat_SM :
      outC->repeat_SM_state_nxt = SSM_st_rep_inactive_repeat_SM;
      break;
    case SSM_st_rep_repeatUntilSuccessfu :
      outC->repeat_SM_state_nxt = SSM_st_rep_repeatUntilSuccessfu;
      break;
    case SSM_st_rep_repeatUntilStopCondi :
      outC->repeat_SM_state_nxt = SSM_st_rep_repeatUntilStopCondi;
      break;
    
  }
  /* 1 */ if (reset) {
    kcg_copy_p42_sessionManagement_(
      &outC->p42_sessionManagement_mem,
      (p42_sessionManagement_T_RCM_Msg *) &cNo_p42_SessionManagement_RCM_M);
  }
  else /* 4 */ if ((*p42_sessionManagement).valid) {
    kcg_copy_p42_sessionManagement_(
      &outC->p42_sessionManagement_mem,
      p42_sessionManagement);
  }
  else /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_p42_sessionManagement_(
      &outC->p42_sessionManagement_mem,
      (p42_sessionManagement_T_RCM_Msg *) &cNo_p42_SessionManagement_RCM_M);
  }
  outC->init = kcg_false;
  /* ck_disconnect */ if (disconnect) {
    outC->connectionCmd.valid = kcg_true;
    outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
    outC->connectionCmd.action = mca_disconnect_RCM_Types_Pkg;
    outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
  }
  else {
    /* sel_repeat_SM */ switch (repeat_SM_state_sel) {
      case SSM_st_rep_inactive_repeat_SM :
        /* guard_rep_inactive */ if (br_1_guard_repeat_SM_rep_inacti) {
          else_clock_IfBlock1 = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_repeat_SM_rep_inacti) {
          else_clock_IfBlock1 = kcg_true;
        }
        else {
          else_clock_IfBlock1 = kcg_false;
        }
        break;
      case SSM_st_rep_repeatUntilSuccessfu :
        /* guard_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */ if (_2_br_1_guard_repeat_SM_rep_rep) {
          else_clock_IfBlock1 = kcg_false;
        }
        else /* cb_anon_sm */ if (_1_br_2_clock_repeat_SM_rep_rep) {
          else_clock_IfBlock1 = kcg_true;
        }
        else {
          else_clock_IfBlock1 = kcg_false;
        }
        break;
      case SSM_st_rep_repeatUntilStopCondi :
        /* guard_rep_repeatUntilStopConditionMet */ if (br_1_guard_repeat_SM_rep_repeat) {
          else_clock_IfBlock1 = kcg_false;
        }
        else /* cb_anon_sm */ if (br_2_clock_repeat_SM_rep_repeat) {
          else_clock_IfBlock1 = kcg_true;
        }
        else {
          else_clock_IfBlock1 = kcg_false;
        }
        break;
      
    }
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      outC->connectionCmd.valid = kcg_true;
      outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
      outC->connectionCmd.action = mca_connect_RCM_Types_Pkg;
      /* 5 */ if ((*p42_sessionManagement).valid & _L321 & _L334 & _L318 &
        (((((*sessionStatus).phase == sp_terminated_RCM_Session_Types) |
              ((*sessionStatus).phase == sp_establishing_RCM_Session_Typ)) &
            (*sessionStatus).valid) | _L336)) {
        outC->connectionCmd.nid_radio =
          outC->p42_sessionManagement_mem.nid_radio;
      }
      else {
        outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
      }
    }
    else /* ck_anon_activ */ if ((*eventsPhases).trainFrontPassesStartOfAnnounce) {
      outC->connectionCmd.valid = kcg_true;
      outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
      outC->connectionCmd.action = mca_expectRadioHole_RCM_Types_P;
      outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
    }
    else /* ck_anon_activ */ if ((*eventsPhases).trainFrontReachesEndOfAnnounced) {
      outC->connectionCmd.valid = kcg_true;
      outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
      outC->connectionCmd.action = mca_unexpectRadioHole_RCM_Types;
      outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
    }
    else {
      outC->connectionCmd.valid = kcg_false;
      outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
      outC->connectionCmd.action = mca_nop_RCM_Types_Pkg;
      outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** requestRadioConnectionSet_MoRC_.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

