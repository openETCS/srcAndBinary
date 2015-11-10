/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findForCheck_manage_TextMessage.h"

/* manage_TextMessages_Pkg::findForCheck */
kcg_bool findForCheck_manage_TextMessage(
  /* manage_TextMessages_Pkg::findForCheck::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_TextMessages_Pkg::findForCheck::inCompareElement */ DMI_TXT_MSG_status_T_DMI_Types_ *inCompareElement)
{
  static kcg_int i;
  /* manage_TextMessages_Pkg::findForCheck::outFound */
  static kcg_bool outFound;
  
  outFound = kcg_false;
  /* 2 */ for (i = 0; i < 31; i++) {
    outFound = /* 1 */
      findElement_manage_TextMessages(
        outFound,
        &(*inStatusList)[i],
        inCompareElement);
  }
  return outFound;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findForCheck_manage_TextMessage.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

