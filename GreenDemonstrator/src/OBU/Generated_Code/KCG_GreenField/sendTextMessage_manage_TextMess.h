/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */
#ifndef _sendTextMessage_manage_TextMes
#define _sendTextMessage_manage_TextMes

#include "kcg_types.h"
#include "saveStatus_manage_TextMessages_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_TextMessages_Pkg::sendTextMessage */
extern void sendTextMessage_manage_TextMess(
  /* manage_TextMessages_Pkg::sendTextMessage::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_TextMessages_Pkg::sendTextMessage::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::intextMessage */ DMI_Text_Message_T_DMI_Messages *intextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inTextReport */ Q_TEXTREPORT inTextReport,
  /* manage_TextMessages_Pkg::sendTextMessage::inNID_TextMessage */ NID_TEXTMESSAGE inNID_TextMessage,
  /* manage_TextMessages_Pkg::sendTextMessage::inContext */ DMI_context_TXT_MSG_T_DMI_Types inContext,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichMode */ M_MODE inWhichMode,
  /* manage_TextMessages_Pkg::sendTextMessage::inWhichLevel */ M_LEVEL inWhichLevel,
  /* manage_TextMessages_Pkg::sendTextMessage::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList,
  /* manage_TextMessages_Pkg::sendTextMessage::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages *dmi_textMessage);

#endif /* _sendTextMessage_manage_TextMes */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendTextMessage_manage_TextMess.h
** Generation date: 2015-11-13T13:31:11
*************************************************************$ */

