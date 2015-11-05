/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out */
void mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_acceptingRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_acceptingRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_handingOverRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_handingOverRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_for_handingOverRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_handingOverRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_for_acceptingRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_acceptingRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_for_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_for_RBC_2)
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
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 37 */ if ((*p45_radioNetworkRegistrationOrder_for_acceptingRBC_in).valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
    }
    /* 25 */ if ((*p42_sessionCmd_for_acceptingRBC_in).valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_acceptingRBC_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_handingOverRBC_in);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      additionalSessionCmdsFromTrack_for_RBC_1,
      additionalSessionCmdsFromTrack_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p45_radioNetworkRegistrationOrder_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p42_sessionCmd_for_RBC_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      additionalSessionCmdsFromTrack_for_RBC_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  else {
    /* 23 */ if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L46_IfBlock1,
        p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_handingOverRBC_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L52_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L50_IfBlock1,
        additionalSessionCmdsFromTrack_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L47_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_2,
        p42_sessionCmd_for_acceptingRBC_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L46_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_acceptingRBC_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L52_IfBlock1,
        additionalSessionCmdsFromTrack_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L50_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L47_IfBlock1,
        p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_2,
        p42_sessionCmd_for_handingOverRBC_in);
    }
    /* 40 */ if (_L46_IfBlock1.valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        &_L46_IfBlock1);
    }
    else /* 38 */ if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    }
    /* 41 */ if (_L47_IfBlock1.valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_2,
        &_L47_IfBlock1);
    }
    else /* 39 */ if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_2,
        p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_2,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    /* 36 */ if (useInformationFromAcceptingRBC) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        additionalSessionCmdsFromTrack_for_RBC_1,
        &_L52_IfBlock1);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        additionalSessionCmdsFromTrack_for_RBC_2,
        &_L50_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        additionalSessionCmdsFromTrack_for_RBC_1,
        &_L50_IfBlock1);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        additionalSessionCmdsFromTrack_for_RBC_2,
        &_L52_IfBlock1);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

