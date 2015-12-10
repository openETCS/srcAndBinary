/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->orderRegistrationDelayed = kcg_true;
  outC->resetDelayedOrderFlag = kcg_true;
  outC->init = kcg_true;
  outC->_L173.valid = kcg_true;
  outC->_L173.q_dir = Q_DIR_Reverse;
  outC->_L173.nid_mn = 0;
  outC->_L163.valid = kcg_true;
  outC->_L163.q_dir = Q_DIR_Reverse;
  outC->_L163.nid_mn = 0;
  outC->_L153.valid = kcg_true;
  outC->_L153.q_dir = Q_DIR_Reverse;
  outC->_L153.nid_mn = 0;
  outC->Register_SM_state_nxt = SSM_st_Unregistered_Register_SM;
  outC->mobileRegistrationStatus.valid = kcg_true;
  outC->mobileRegistrationStatus.mobileDeviceNo = 0;
  outC->mobileRegistrationStatus.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->mobileRegistrationStatus.status = mrs_unregistered_RCM_Types_Pkg;
  outC->mobileRegistrationStatus.nid_mn = 0;
  outC->mobileRegistrationCmd.valid = kcg_true;
  outC->mobileRegistrationCmd.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd.network_id = 0;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = 0;
  /* 8 */ RisingEdge_init_digital(&outC->Context_8);
  /* 1 */ FallingEdge_init_digital(&outC->Context_1);
  /* 6 */ RisingEdge_init_digital(&outC->Context_6);
  /* 7 */ RisingEdge_init_digital(&outC->Context_7);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
  /* 6 */ RisingEdge_reset_digital(&outC->Context_6);
  /* 7 */ RisingEdge_reset_digital(&outC->Context_7);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2 */
void registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::p45_registrationOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_registrationOrder,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::level */ M_LEVEL level,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::mobileRegistrationContext */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::RadioNetworkID_Default */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM::Reregistering */ kcg_bool br_1_guard_Register_SM_Reregistering;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */ SSM_ST_Register_SM Register_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */ SSM_ST_Register_SM Register_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::triggerRegistrationOfMobile */ kcg_bool triggerRegistrationOfMobile;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::orderRegistrationImmediately */ kcg_bool orderRegistrationImmediately;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::registrationStatus */ mobileRegistrationStatus_T_RCM_Types_Pkg registrationStatus;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L149 */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L149;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L185 */ kcg_bool _L185;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L242 */ kcg_bool _L242;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::_L313 */ kcg_bool _L313;
  
  outC->mobileRegistrationCmd.mobileDeviceNo =
    (*mobileRegistrationContext).mobileDeviceNo;
  triggerRegistrationOfMobile = (*newRadioNetworkIDFromDriver).valid &
    ((M_LEVEL_Level_2 == level) | (level == M_LEVEL_Level_3));
  /* 7 */ RisingEdge_digital(triggerRegistrationOfMobile, &outC->Context_7);
  /* 1 */ Read_P045_TM(&(*p45_registrationOrder).packets, &_L185, &_L149);
  _L242 = (*p45_registrationOrder).valid & _L185;
  /* 6 */
  RisingEdge_digital((*atPowerUpRadioNetworkID).valid, &outC->Context_6);
  _L185 = outC->Context_6.RE_Output | outC->Context_7.RE_Output | _L242;
  /* 1 */ if (reset) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L153,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L173,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L163,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->lastReceivedRadioNetworkID,
      RadioNetworkID_Default);
  }
  else {
    /* 4 */ if (_L242) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L153,
        &_L149);
    }
    else /* 1_fby_1_init_7 */ if (outC->init) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L153,
        (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
          &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    }
    /* 4 */ if (triggerRegistrationOfMobile) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L173,
        newRadioNetworkIDFromDriver);
    }
    else /* 4_fby_1_init_7 */ if (outC->init) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L173,
        (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
          &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    }
    /* 4 */ if ((*atPowerUpRadioNetworkID).valid) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L163,
        atPowerUpRadioNetworkID);
    }
    else /* 2_fby_1_init_7 */ if (outC->init) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->_L163,
        (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
          &cNoP45_RadioNetworkRegistration_RCM_Types_Pkg);
    }
    /* 4 */ if (_L185) {
      /* 6 */ if (_L242) {
        kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
          &outC->lastReceivedRadioNetworkID,
          &outC->_L153);
      }
      else /* 5 */ if (outC->Context_7.RE_Output) {
        kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
          &outC->lastReceivedRadioNetworkID,
          &outC->_L173);
      }
      else {
        kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
          &outC->lastReceivedRadioNetworkID,
          &outC->_L163);
      }
    }
    else /* 5_fby_1_init_7 */ if (outC->init) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->lastReceivedRadioNetworkID,
        RadioNetworkID_Default);
    }
  }
  outC->mobileRegistrationCmd.network_id =
    outC->lastReceivedRadioNetworkID.nid_mn;
  triggerRegistrationOfMobile = outC->lastReceivedRadioNetworkID.valid &
    (_L185 | (*eventsAndPhases).triggerDecisionThatNoRadioNetworkIDAvailable);
  _L242 = (*connectionStatus).valid & (((*connectionStatus).status ==
        mcs_connecting_RCM_Types_Pkg) | ((*connectionStatus).status ==
        mcs_connected_RCM_Types_Pkg));
  _L185 = ((*sessionStatus).phase == sp_establishing_RCM_Session_Types_Pkg) |
    ((*sessionStatus).phase == sp_terminating_RCM_Session_Types_Pkg) |
    ((*sessionStatus).phase == sp_maintaining_RCM_Session_Types_Pkg);
  br_1_guard_Register_SM_Reregistering =
    outC->lastReceivedRadioNetworkID.valid &
    (outC->lastReceivedRadioNetworkID.nid_mn !=
      (*mobileRegistrationContext).nid_mn) & (*mobileRegistrationContext).valid;
  /* init_Register_SM */ if (outC->init) {
    outC->init = kcg_false;
    outC->orderRegistrationDelayed = kcg_false;
    Register_SM_state_sel = SSM_st_Unregistered_Register_SM;
  }
  else {
    outC->orderRegistrationDelayed = (triggerRegistrationOfMobile & (_L242 |
          (_L185 & (*sessionStatus).valid)) &
        br_1_guard_Register_SM_Reregistering) | (!outC->resetDelayedOrderFlag &
        outC->orderRegistrationDelayed);
    Register_SM_state_sel = outC->Register_SM_state_nxt;
  }
  orderRegistrationImmediately = triggerRegistrationOfMobile &
    ((*mobileRegistrationContext).valid &
      (((*mobileRegistrationContext).status == mrs_unregistered_RCM_Types_Pkg) |
        ((((*mobileRegistrationContext).status ==
              mrs_registered_RCM_Types_Pkg) |
            ((*mobileRegistrationContext).status ==
              mrs_registering_RCM_Types_Pkg)) &
          br_1_guard_Register_SM_Reregistering))) & ((*sessionStatus).valid &
      !_L185);
  /* 1 */
  FallingEdge_digital(
    (kcg_bool)
      (_L185 | ((*connectionStatus).status == mcs_connecting_RCM_Types_Pkg) |
        ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg) | _L242),
    &outC->Context_1);
  triggerRegistrationOfMobile = (*sessionStatus).valid &
    (*connectionStatus).valid & outC->Context_1.FE_Output;
  /* 9 */ if ((*mobileRegistrationContext).valid &
    ((*mobileRegistrationContext).healthStatus == mhs_ok_RCM_Types_Pkg)) {
    registrationStatus = (*mobileRegistrationContext).status;
  }
  else {
    registrationStatus = mrs_unregistered_RCM_Types_Pkg;
  }
  /* sel_Register_SM */ switch (Register_SM_state_sel) {
    case SSM_st_Reregistering_Register_SM :
      outC->resetDelayedOrderFlag = kcg_false;
      br_1_guard_Register_SM_Reregistering = registrationStatus ==
        mrs_unregistered_RCM_Types_Pkg;
      if (br_1_guard_Register_SM_Reregistering) {
        _L313 = kcg_true;
        Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      else {
        _L313 = kcg_false;
        Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      break;
    case SSM_st_Registered_Register_SM :
      _L185 = orderRegistrationImmediately | (outC->orderRegistrationDelayed &
          triggerRegistrationOfMobile);
      _L313 = kcg_false;
      if (_L185) {
        outC->resetDelayedOrderFlag = kcg_true;
        Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      else {
        outC->resetDelayedOrderFlag = kcg_false;
        if (registrationStatus == mrs_registering_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Registering_Register_SM;
        }
        else if (registrationStatus == mrs_unregistered_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Unregistered_Register_SM;
        }
        else {
          Register_SM_state_act = SSM_st_Registered_Register_SM;
        }
      }
      break;
    case SSM_st_Registering_Register_SM :
      _L242 = orderRegistrationImmediately | (outC->orderRegistrationDelayed &
          triggerRegistrationOfMobile);
      _L313 = kcg_false;
      if (_L242) {
        outC->resetDelayedOrderFlag = kcg_true;
        Register_SM_state_act = SSM_st_Reregistering_Register_SM;
      }
      else {
        outC->resetDelayedOrderFlag = kcg_false;
        if (registrationStatus == mrs_registered_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Registered_Register_SM;
        }
        else {
          Register_SM_state_act = SSM_st_Registering_Register_SM;
        }
      }
      break;
    case SSM_st_Unregistered_Register_SM :
      outC->resetDelayedOrderFlag = kcg_false;
      if (orderRegistrationImmediately) {
        _L313 = kcg_true;
        Register_SM_state_act = SSM_st_Registering_Register_SM;
      }
      else {
        _L313 = kcg_false;
        if (registrationStatus == mrs_registering_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Registering_Register_SM;
        }
        else if (registrationStatus == mrs_registered_RCM_Types_Pkg) {
          Register_SM_state_act = SSM_st_Registered_Register_SM;
        }
        else {
          Register_SM_state_act = SSM_st_Unregistered_Register_SM;
        }
      }
      break;
    
  }
  outC->mobileRegistrationCmd.valid = _L313 | outC->resetDelayedOrderFlag;
  /* act_Register_SM */ switch (Register_SM_state_act) {
    case SSM_st_Unregistered_Register_SM :
      registrationStatus = mrs_unregistered_RCM_Types_Pkg;
      outC->Register_SM_state_nxt = SSM_st_Unregistered_Register_SM;
      break;
    case SSM_st_Registering_Register_SM :
      registrationStatus = mrs_registering_RCM_Types_Pkg;
      outC->Register_SM_state_nxt = SSM_st_Registering_Register_SM;
      break;
    case SSM_st_Registered_Register_SM :
      registrationStatus = mrs_registered_RCM_Types_Pkg;
      outC->Register_SM_state_nxt = SSM_st_Registered_Register_SM;
      break;
    case SSM_st_Reregistering_Register_SM :
      registrationStatus = mrs_registering_RCM_Types_Pkg;
      outC->Register_SM_state_nxt = SSM_st_Reregistering_Register_SM;
      break;
    
  }
  /* 10 */ if (_L313) {
    outC->mobileRegistrationCmd.action = mra_register_RCM_Types_Pkg;
  }
  else {
    outC->mobileRegistrationCmd.action = mra_unregister_RCM_Types_Pkg;
  }
  /* 8 */ RisingEdge_digital((*eventsAndPhases).atPowerDown, &outC->Context_8);
  outC->memorizeTheLastRadioNetworkID = outC->Context_8.RE_Output;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->mobileRegistrationStatus,
    mobileRegistrationContext);
  outC->mobileRegistrationStatus.status = registrationStatus;
  outC->rejectOrderToContactRBC_or_RIU = registrationStatus !=
    mrs_registered_RCM_Types_Pkg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

