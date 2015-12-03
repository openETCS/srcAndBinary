/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkIfNeeded_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::checkIfNeeded */
kcg_bool checkIfNeeded_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::checkIfNeeded::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_TextMessages_Pkg::checkIfNeeded::announcedLevel */ M_LEVEL announcedLevel,
  /* manage_TextMessages_Pkg::checkIfNeeded::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList)
{
  /* manage_TextMessages_Pkg::checkIfNeeded */
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg tmp;
  /* manage_TextMessages_Pkg::checkIfNeeded::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_TextMessages_Pkg::checkIfNeeded::sendingNeeded */
  static kcg_bool sendingNeeded;
  
  IfBlock1_clock = (!(*inModeLevel_Ack).LevelNeedsAck &
      (*inModeLevel_Ack).valid) | (*inModeLevel_Ack).LevelNeedsAck;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 1 */
    mapMLtoElement_manage_TextMessages_Pkg(
      inModeLevel_Ack,
      announcedLevel,
      &tmp);
    sendingNeeded = !/* 1 */
      findForCheck_manage_TextMessages_Pkg(inStatusList, &tmp);
  }
  else {
    sendingNeeded = kcg_false;
  }
  return sendingNeeded;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkIfNeeded_manage_TextMessages_Pkg.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

