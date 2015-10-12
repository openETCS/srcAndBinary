/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void registeringToTheRadioNetwork_init_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->orderTheRegistrationOfItsConnectedMobiles = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->noValidActualRadioNetworkID_available = kcg_true;
  outC->_L108 = kcg_true;
  outC->init = kcg_true;
  outC->mobileSWStatus.valid = kcg_true;
  outC->mobileSWStatus.mobileHW_available = kcg_true;
  outC->mobileSWStatus.connectionStatus = mswc_unregistered_MoRC_Pck;
  outC->mobileSWStatus.registeredRadioNetworkID = 0;
  outC->mobileSWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileHWCmd.valid = kcg_true;
  outC->mobileHWCmd.action = mhwa_nop_MoRC_Pck;
  outC->mobileHWCmd.radioNetworkID = 0;
  outC->mobileHWCmd.nid_radio = 0;
  outC->actualRadioNetworkID.valid = kcg_true;
  outC->actualRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->actualRadioNetworkID.nid_mn = 0;
  /* 1 */ radioNetworkMobile_init_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 4 */ RisingEdge_init_digital(&outC->Context_4);
  /* 2 */ RisingEdge_init_digital(&outC->Context_2);
  /* 1 */ RisingEdge_init_digital(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void registeringToTheRadioNetwork_reset_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ radioNetworkMobile_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
  /* 2 */ RisingEdge_reset_digital(&outC->Context_2);
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork */
void registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::atPowerUp */ kcg_bool atPowerUp,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::afterDriverEntryOfANewRadioNetworkID */ kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::level */ M_LEVEL level,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::registrationOrderedFromTrackside */ kcg_bool registrationOrderedFromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::registrationOrderFromTracksideCancelled */ kcg_bool registrationOrderFromTracksideCancelled,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::atPowerOff */ kcg_bool atPowerOff,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::RadioNetworkID_memorized */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_memorized,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::RadioNetworkID_fromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_fromDriver,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::RadioNetworkID_fromTrackside */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_fromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::triggerDecisionThatNoRadioNetworkIDAvailable */ kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::mobileSWCmd */ mobileSWCmd_Type_MoRC_Pck *mobileSWCmd,
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::RadioNetworkID_Default */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork */
  static mobileSWCmd_Type_MoRC_Pck tmp;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L32 */
  static kcg_bool _L32;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L44 */
  static kcg_bool _L44;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L76 */
  static mobileSWStatus_Type_MoRC_Pck _L76;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L89 */
  static kcg_bool _L89;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L95 */
  static kcg_bool _L95;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L99 */
  static kcg_bool _L99;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L103 */
  static kcg_bool _L103;
  /* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork::_L120 */
  static kcg_bool _L120;
  
  /* 1 */ RisingEdge_digital(atPowerUp, &outC->Context_1);
  /* last_init_ck_mobileSWStatus_loc */ if (outC->init) {
    _L32 = kcg_true;
    kcg_copy_mobileSWStatus_Type_MoRC_Pck(
      &_L76,
      (mobileSWStatus_Type_MoRC_Pck *) &cInvalidMobileSWStatus_MoRC_Pck);
  }
  else {
    _L32 = outC->noValidActualRadioNetworkID_available;
    kcg_copy_mobileSWStatus_Type_MoRC_Pck(&_L76, &outC->mobileSWStatus);
  }
  _L89 = (*RadioNetworkID_Default).valid &
    triggerDecisionThatNoRadioNetworkIDAvailable & _L32;
  _L32 = (*RadioNetworkID_fromDriver).valid &
    afterDriverEntryOfANewRadioNetworkID;
  _L44 = (*RadioNetworkID_fromTrackside).valid &
    registrationOrderedFromTrackside;
  /* 1 */ if (((*RadioNetworkID_memorized).valid & outC->Context_1.RE_Output) |
    _L32 | _L44 | _L89) {
    /* 3 */ if (_L89) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->actualRadioNetworkID,
        RadioNetworkID_Default);
    }
    else /* 2 */ if (_L44) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->actualRadioNetworkID,
        RadioNetworkID_fromTrackside);
    }
    else /* 1 */ if (_L32) {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->actualRadioNetworkID,
        RadioNetworkID_fromDriver);
    }
    else {
      kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
        &outC->actualRadioNetworkID,
        RadioNetworkID_memorized);
    }
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->actualRadioNetworkID,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cInvalidRadioNetworkID_MoRC_Pck);
  }
  outC->noValidActualRadioNetworkID_available =
    !outC->actualRadioNetworkID.valid;
  outC->orderTheRegistrationOfItsConnectedMobiles = outC->Context_1.RE_Output |
    (afterDriverEntryOfANewRadioNetworkID & ((M_LEVEL_Level_2 == level) |
        (level == M_LEVEL_Level_3))) |
    (triggerDecisionThatNoRadioNetworkIDAvailable &
      outC->noValidActualRadioNetworkID_available);
  /* 2 */ RisingEdge_digital(atPowerOff, &outC->Context_2);
  outC->memorizeTheLastRadioNetworkID = outC->Context_2.RE_Output &
    outC->actualRadioNetworkID.valid;
  _L89 = _L76.connectionStatus == mswc_unregistered_MoRC_Pck;
  _L95 = _L89 | ((mswc_unregistered_MoRC_Pck != _L76.connectionStatus) &
      (_L76.registeredRadioNetworkID != outC->actualRadioNetworkID.nid_mn));
  _L99 = !((_L76.connectionStatus == mswc_establishingSession_MoRC_Pck) |
      (_L76.connectionStatus == mswc_sessionEstablished_MoRC_Pck));
  _L103 = !((_L76.connectionStatus == mswc_connecting_MoRC_Pck) |
      (_L76.connectionStatus == mswc_connected_MoRC_Pck));
  /* 1_1 */ if (outC->init) {
    outC->init = kcg_false;
    outC->_L108 = kcg_false;
  }
  else {
    outC->_L108 = !registrationOrderFromTracksideCancelled &
      (registrationOrderedFromTrackside | outC->_L108);
  }
  /* 4 */
  RisingEdge_digital(
    (kcg_bool) (outC->_L108 & _L95 & _L99 & _L103),
    &outC->Context_4);
  _L120 = (_L76.valid & _L76.mobileHW_available &
      ((registrationOrderedFromTrackside & _L95 & _L99 & _L103) |
        outC->Context_4.RE_Output)) |
    outC->orderTheRegistrationOfItsConnectedMobiles | (_L32 | _L44);
  /* 4 */ if (_L120) {
    tmp.valid = _L120;
    tmp.action = mswa_register_MoRC_Pck;
    tmp.radioNetworkID = outC->actualRadioNetworkID.nid_mn;
  }
  else {
    kcg_copy_mobileSWCmd_Type_MoRC_Pck(&tmp, mobileSWCmd);
  }
  /* 1 */
  radioNetworkMobile_MoRC_Pck_Subfunc_Pkg(
    mobileHWStatus,
    &tmp,
    &outC->_1_Context_1);
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &outC->mobileHWCmd,
    &outC->_1_Context_1.mobileHWCmd);
  kcg_copy_mobileSWStatus_Type_MoRC_Pck(
    &outC->mobileSWStatus,
    &outC->_1_Context_1.mobileSWStatus);
  outC->rejectOrderToContactRBC_or_RIU = _L89 | (_L76.connectionStatus ==
      mswc_registering_MoRC_Pck);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

