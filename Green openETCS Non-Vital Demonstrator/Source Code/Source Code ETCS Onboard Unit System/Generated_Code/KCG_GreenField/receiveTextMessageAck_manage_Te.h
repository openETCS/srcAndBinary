/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */
#ifndef _receiveTextMessageAck_manage_T
#define _receiveTextMessageAck_manage_T

#include "kcg_types.h"
#include "clearStatus_manage_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_TextMessages_Pkg::receiveTextMessageAck */
extern void receiveTextMessageAck_manage_Te(
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::inTXT_MsgAck */ DMI_Text_Message_Ack_T_DMI_Mess *inTXT_MsgAck,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList,
  /* manage_TextMessages_Pkg::receiveTextMessageAck::outML */ DMI_To_Modes_T_DMI_Types_Pkg *outML);

#endif /* _receiveTextMessageAck_manage_T */
/* $**************** KCG Version 6.4 (build i21) ****************
** receiveTextMessageAck_manage_Te.h
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */

