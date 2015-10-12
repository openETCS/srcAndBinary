/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "receiveTextMessageAck_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::receiveTextMessageAck */
void receiveTextMessageAck_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inTXT_MsgAck */ DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *inTXT_MsgAck,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outML */ DMI_To_Modes_T_DMI_Types_Pkg *outML)
{
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L6 */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg _L6_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock2::then::_L3 */
  static kcg_int _L3_IfBlock2;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_TextMessages_Pkg::receiveTextMessageAck::context */
  static DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  
  /* ck_isValid */ if ((*inTXT_MsgAck).valid) {
    if ((0 <= (*inTXT_MsgAck).textMessage_ID) &
      ((*inTXT_MsgAck).textMessage_ID < 31)) {
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &_L6_IfBlock2,
        &(*inStatusList)[(*inTXT_MsgAck).textMessage_ID]);
    }
    else {
      kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &_L6_IfBlock2,
        (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
          &cFreeTestStatusElement_DMI_Types_Pkg);
    }
    /* 2 */ if (_L6_IfBlock2.valid) {
      context = _L6_IfBlock2.context;
    }
    else {
      context = con_undefined_DMI_Types_Pkg;
    }
    /* 2 */
    clearStatus_manage_TextMessages_Pkg(
      inStatusList,
      (*inTXT_MsgAck).textMessage_ID,
      outStatusList,
      &_L3_IfBlock2);
  }
  else {
    context = con_undefined_DMI_Types_Pkg;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      outStatusList,
      inStatusList);
  }
  IfBlock1_clock = context == con_levelMgmt_DMI_Types_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      outML,
      (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
    (*outML).valid = kcg_true;
    (*outML).LevelAck = (*inTXT_MsgAck).acknowledged;
  }
  else {
    else_clock_IfBlock1 = context == con_modeChange_DMI_Types_Pkg;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        outML,
        (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
      (*outML).valid = kcg_true;
      (*outML).DriverAck.valid = kcg_true;
      (*outML).DriverAck.acknowledgement = (*inTXT_MsgAck).acknowledged;
      /* ck_isValid */ if ((*inTXT_MsgAck).valid) {
        (*outML).DriverAck.whichMode = _L6_IfBlock2.whichMode;
      }
      else {
        (*outML).DriverAck.whichMode =
          cFreeTestStatusElement_DMI_Types_Pkg.whichMode;
      }
    }
    else {
      kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
        outML,
        (DMI_To_Modes_T_DMI_Types_Pkg *) &cNoDMI_ML_manage_TextMessages_Pkg);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** receiveTextMessageAck_manage_TextMessages_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

