/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "splitInputData_Handover_Pkg_han.h"

/* Handover_Pkg::handoverUtils_Pkg::splitInputData */
void splitInputData_Handover_Pkg_han(
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatus_1 */ morcStatus_T_RCM_Session_Types_ *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatus_2 */ morcStatus_T_RCM_Session_Types_ *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromHandingOverMobile */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverMobile,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromAcceptingMobile */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromAcceptingMobile,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromBalise */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromBalise,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_out */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_out)
{
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L40 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L40_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L120 */
  static kcg_bool _L120_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L109 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L109_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L83 */
  static kcg_bool _L83_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L100 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L100_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L61 */
  static morcStatus_T_RCM_Session_Types_ _L61_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L65 */
  static morcStatus_T_RCM_Session_Types_ _L65_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility == isAbleToManageOneSession_Handov;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 38 */ if (((*dataFromTrack_in).source ==
        msrc_Euroradio_Common_Types_Pkg) & (*dataFromTrack_in).valid) {
      kcg_copy_msgFromTrack_T_RCM_Msg(&_L40_IfBlock1, dataFromTrack_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L40_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    /* 40 */ if (useInformationFromAcceptingRBC) {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        dataFromHandingOverMobile,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
      kcg_copy_msgFromTrack_T_RCM_Msg(dataFromAcceptingMobile, &_L40_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        dataFromHandingOverMobile,
        &_L40_IfBlock1);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        dataFromAcceptingMobile,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    /* 37 */ if ((*dataFromTrack_in).BG_Common_Header.valid &
      (msrc_Eurobalise_Common_Types_Pk == (*dataFromTrack_in).source) &
      (*dataFromTrack_in).valid) {
      kcg_copy_msgFromTrack_T_RCM_Msg(dataFromBalise, dataFromTrack_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        dataFromBalise,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    kcg_copy_msgFromTrack_T_RCM_Msg(dataFromTrack_out, dataFromTrack_in);
  }
  else {
    /* 30 */ if (handingOverMobile_is_mobile_1) {
      kcg_copy_morcStatus_T_RCM_Sessi(&_L61_IfBlock1, morcStatus_1);
      kcg_copy_morcStatus_T_RCM_Sessi(&_L65_IfBlock1, morcStatus_2);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Sessi(&_L61_IfBlock1, morcStatus_2);
      kcg_copy_morcStatus_T_RCM_Sessi(&_L65_IfBlock1, morcStatus_1);
    }
    _L83_IfBlock1 = (*dataFromTrack_in).valid & ((*dataFromTrack_in).source ==
        msrc_Euroradio_Common_Types_Pkg) &
      (*dataFromTrack_in).sendingRBC.valid & _L61_IfBlock1.session.valid;
    /* 32 */ if (_L83_IfBlock1 & (_L61_IfBlock1.session.phase ==
        sp_maintaining_RCM_Session_Type) & (_L61_IfBlock1.session.nid_c ==
        (*dataFromTrack_in).sendingRBC.nid_c) &
      ((*dataFromTrack_in).sendingRBC.rbc_id ==
        _L61_IfBlock1.session.nid_rbc)) {
      kcg_copy_msgFromTrack_T_RCM_Msg(&_L100_IfBlock1, dataFromTrack_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L100_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    kcg_copy_msgFromTrack_T_RCM_Msg(dataFromHandingOverMobile, &_L100_IfBlock1);
    /* 33 */ if (_L83_IfBlock1 & (_L65_IfBlock1.session.phase ==
        sp_maintaining_RCM_Session_Type) &
      ((*dataFromTrack_in).sendingRBC.nid_c == _L65_IfBlock1.session.nid_c) &
      ((*dataFromTrack_in).sendingRBC.rbc_id == _L65_IfBlock1.session.nid_rbc) &
      _L65_IfBlock1.session.valid) {
      kcg_copy_msgFromTrack_T_RCM_Msg(&_L109_IfBlock1, dataFromTrack_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_L109_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    kcg_copy_msgFromTrack_T_RCM_Msg(dataFromAcceptingMobile, &_L109_IfBlock1);
    _L120_IfBlock1 = (*dataFromTrack_in).BG_Common_Header.valid &
      (msrc_Eurobalise_Common_Types_Pk == (*dataFromTrack_in).source) &
      (*dataFromTrack_in).valid;
    /* 36 */ if (_L120_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_Msg(dataFromBalise, dataFromTrack_in);
      kcg_copy_msgFromTrack_T_RCM_Msg(dataFromTrack_out, dataFromBalise);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_Msg(
        dataFromBalise,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
      /* 35 */ if (useInformationFromAcceptingRBC) {
        kcg_copy_msgFromTrack_T_RCM_Msg(dataFromTrack_out, &_L109_IfBlock1);
      }
      else {
        kcg_copy_msgFromTrack_T_RCM_Msg(dataFromTrack_out, &_L100_IfBlock1);
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** splitInputData_Handover_Pkg_han.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

