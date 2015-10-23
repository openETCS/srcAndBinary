/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "clearStatus_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::clearStatus */
void clearStatus_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::clearStatus::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::clearStatus::inMessageID */ DMI_TextMessage_ID_T_DMI_Types_Pkg inMessageID,
  /* manage_TextMessages_Pkg::clearStatus::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList,
  /* manage_TextMessages_Pkg::clearStatus::outIndex */ kcg_int *outIndex)
{
  /* manage_TextMessages_Pkg::clearStatus */
  static kcg_bool cond_iterw;
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 31; i++) {
    /* 1 */
    deleteElement_manage_TextMessages_Pkg(
      i,
      &(*inStatusList)[i],
      inMessageID,
      &cond_iterw,
      &(*outStatusList)[i]);
    *outIndex = i + 1;
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = *outIndex; i < 31; i++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &(*outStatusList)[i],
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** clearStatus_manage_TextMessages_Pkg.c
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

