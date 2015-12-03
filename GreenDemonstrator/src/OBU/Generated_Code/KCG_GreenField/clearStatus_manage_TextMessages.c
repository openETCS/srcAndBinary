/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "clearStatus_manage_TextMessages.h"

/* manage_TextMessages_Pkg::clearStatus */
void clearStatus_manage_TextMessages(
  /* manage_TextMessages_Pkg::clearStatus::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_TextMessages_Pkg::clearStatus::inMessageID */ DMI_TextMessage_ID_T_DMI_Types_ inMessageID,
  /* manage_TextMessages_Pkg::clearStatus::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList,
  /* manage_TextMessages_Pkg::clearStatus::outIndex */ kcg_int *outIndex)
{
  /* manage_TextMessages_Pkg::clearStatus */
  static kcg_bool cond_iterw;
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 31; i++) {
    /* 1 */
    deleteElement_manage_TextMessag(
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
    kcg_copy_DMI_TXT_MSG_status_T_D(
      &(*outStatusList)[i],
      (DMI_TXT_MSG_status_T_DMI_Types_ *) &cFreeTestStatusElement_DMI_Type);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** clearStatus_manage_TextMessages.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

