/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileCtrlCmdRouter_out_Handove.h"

/* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out */
void mobileCtrlCmdRouter_out_Handove(
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *_5_additionalSessionCmdsFromTra,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_acceptingRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_handingOverRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_handingOverR,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_for_handingOverRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *_4_p45_radioNetworkRegistration,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_for_acceptingRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *_3_p45_radioNetworkRegistration,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *_2_p45_radioNetworkRegistration,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *_1_additionalSessionCmdsFromTra,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrd,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_)
{
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L52 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L52_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L50 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L50_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L47 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L47_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L46 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L46_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility == isAbleToManageOneSession_Handov;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 37 */ if ((*_3_p45_radioNetworkRegistration).valid) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        _2_p45_radioNetworkRegistration,
        _3_p45_radioNetworkRegistration);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        _2_p45_radioNetworkRegistration,
        _4_p45_radioNetworkRegistration);
    }
    /* 25 */ if ((*p42_sessionCmd_for_acceptingRBC).valid) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_acceptingRBC);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_handingOverR);
    }
    kcg_copy_msgFromTrack_T_RCM_Msg(
      _1_additionalSessionCmdsFromTra,
      _5_additionalSessionCmdsFromTra);
    kcg_copy_msgFromTrack_T_RCM_Msg(
      p45_radioNetworkRegistrationOrd,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    kcg_copy_msgFromTrack_T_RCM_Msg(
      p42_sessionCmd_for_RBC_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    kcg_copy_msgFromTrack_T_RCM_Msg(
      additionalSessionCmdsFromTrack_,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
  }
  else {
    /* 23 */ if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L46_IfBlock1,
        _4_p45_radioNetworkRegistration);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_handingOverR);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L52_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L50_IfBlock1,
        _5_additionalSessionCmdsFromTra);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L47_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p42_sessionCmd_for_RBC_2,
        p42_sessionCmd_for_acceptingRBC);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L46_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_acceptingRBC);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L52_IfBlock1,
        _5_additionalSessionCmdsFromTra);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L50_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L47_IfBlock1,
        _4_p45_radioNetworkRegistration);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p42_sessionCmd_for_RBC_2,
        p42_sessionCmd_for_handingOverR);
    }
    /* 40 */ if (_L46_IfBlock1.valid) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        _2_p45_radioNetworkRegistration,
        &_L46_IfBlock1);
    }
    else /* 38 */ if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        _2_p45_radioNetworkRegistration,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        _2_p45_radioNetworkRegistration,
        _3_p45_radioNetworkRegistration);
    }
    /* 41 */ if (_L47_IfBlock1.valid) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p45_radioNetworkRegistrationOrd,
        &_L47_IfBlock1);
    }
    else /* 39 */ if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p45_radioNetworkRegistrationOrd,
        _3_p45_radioNetworkRegistration);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        p45_radioNetworkRegistrationOrd,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    /* 36 */ if (useInformationFromAcceptingRBC) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        _1_additionalSessionCmdsFromTra,
        &_L52_IfBlock1);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        additionalSessionCmdsFromTrack_,
        &_L50_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        _1_additionalSessionCmdsFromTra,
        &_L50_IfBlock1);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        additionalSessionCmdsFromTrack_,
        &_L52_IfBlock1);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mobileCtrlCmdRouter_out_Handove.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

