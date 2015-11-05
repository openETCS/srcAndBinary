/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */
#ifndef _manageTextMessages_manage_Text
#define _manageTextMessages_manage_Text

#include "kcg_types.h"
#include "sendTextMessage_manage_TextMess.h"
#include "checkIfNeeded_manage_TextMessag.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_TextMessages_Pkg::manageTextMessages */
extern void manageTextMessages_manage_TextM(
  /* manage_TextMessages_Pkg::manageTextMessages::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_TextMessages_Pkg::manageTextMessages::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_FromBG */ kcg_bool dmi_FromBG,
  /* manage_TextMessages_Pkg::manageTextMessages::inModeLevel_Ack */ T_AcknoledgementRequest_Level_A *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::manageTextMessages::announcedLevelTransition */ T_AnnouncedLevel_Level_And_Mode *announcedLevelTransition,
  /* manage_TextMessages_Pkg::manageTextMessages::dmi_textMessage */ DMI_Text_Message_T_DMI_Messages *dmi_textMessage,
  /* manage_TextMessages_Pkg::manageTextMessages::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList);

#endif /* _manageTextMessages_manage_Text */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageTextMessages_manage_TextM.h
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */

