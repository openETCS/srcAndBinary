/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendTextMessage_manage_TextMess.h"

/* manage_TextMessages_Pkg::sendTextMessage */
void sendTextMessage_manage_TextMess(
  /* manage_TextMessages_Pkg::sendTextMessage::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_TextMessages_Pkg::sendTextMessage::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::intextMessage */ DMI_Text_Message_T_DMI_Messages *intextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inTextReport */ Q_TEXTREPORT inTextReport,
  /* manage_TextMessages_Pkg::sendTextMessage::inNID_TextMessage */ NID_TEXTMESSAGE inNID_TextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inContext */ DMI_context_TXT_MSG_T_DMI_Types inContext,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichMode */ M_MODE inWhichMode,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichLevel */ M_LEVEL inWhichLevel,
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages *dmi_textMessage)
{
  /* manage_TextMessages_Pkg::sendTextMessage */
  static DMI_TXT_MSG_status_T_DMI_Types_ mk_struct;
  /* manage_TextMessages_Pkg::sendTextMessage::needsStore */
  static kcg_bool needsStore;
  
  needsStore = (Q_TEXTCONFIRM_No_confirmation_r !=
      (*intextMessage).q_textConfirm) & (*intextMessage).valid;
  /* ck_needsStore */ if (needsStore) {
    mk_struct.valid = kcg_true;
    mk_struct.dmi_textMessageID = (*intextMessage).textMessage_ID;
    mk_struct.timeStamp = inSystemTime;
    mk_struct.textReport = inTextReport;
    mk_struct.context = inContext;
    mk_struct.nid_textmessage = inNID_TextMessage;
    mk_struct.whichLevel = inWhichLevel;
    mk_struct.whichMode = inWhichMode;
    /* 1 */
    saveStatus_manage_TextMessages_(inStatusList, &mk_struct, outStatusList);
    kcg_copy_DMI_Text_Message_T_DMI(dmi_textMessage, intextMessage);
  }
  else /* ck_anon_activ */ if ((*intextMessage).valid) {
    kcg_copy_DMI_TXT_MSGList_status(outStatusList, inStatusList);
    kcg_copy_DMI_Text_Message_T_DMI(dmi_textMessage, intextMessage);
  }
  else {
    kcg_copy_DMI_TXT_MSGList_status(outStatusList, inStatusList);
    kcg_copy_DMI_Text_Message_T_DMI(
      dmi_textMessage,
      (DMI_Text_Message_T_DMI_Messages *) &cDefaultText_manage_DMI_Output_);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendTextMessage_manage_TextMess.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

