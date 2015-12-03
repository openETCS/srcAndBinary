/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findForCheck_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::findForCheck */
kcg_bool findForCheck_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::findForCheck::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::findForCheck::inCompareElement */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *inCompareElement)
{
  kcg_int i;
  /* manage_TextMessages_Pkg::findForCheck::outFound */ kcg_bool outFound;
  
  outFound = kcg_false;
  /* 2 */ for (i = 0; i < 31; i++) {
    outFound = /* 1 */
      findElement_manage_TextMessages_Pkg(
        outFound,
        &(*inStatusList)[i],
        inCompareElement);
  }
  return outFound;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findForCheck_manage_TextMessages_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

