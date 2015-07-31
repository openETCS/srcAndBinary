/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkIfNeeded_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::checkIfNeeded */
kcg_bool checkIfNeeded_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::checkIfNeeded::dmi_FromML_Change */DMI_ModesToDMI_T_DMI_Types_Pkg *dmi_FromML_Change,
  /* manage_TextMessages_Pkg::checkIfNeeded::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList)
{
  static DMI_TXT_MSG_status_T_DMI_Types_Pkg tmp;
  /* manage_TextMessages_Pkg::checkIfNeeded::sendingNeeded */
  static kcg_bool sendingNeeded;
  
  if ((*dmi_FromML_Change).valid) {
    /* 1 */ mapMLtoElement_manage_TextMessages_Pkg(dmi_FromML_Change, &tmp);
    sendingNeeded = !/* 1 */
      findForCheck_manage_TextMessages_Pkg(inStatusList, &tmp);
  }
  else {
    sendingNeeded = kcg_false;
  }
  return sendingNeeded;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkIfNeeded_manage_TextMessages_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

