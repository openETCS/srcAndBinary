/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findElement_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::findElement */
kcg_bool findElement_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::findElement::accu */ kcg_bool accu,
  /* manage_TextMessages_Pkg::findElement::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* manage_TextMessages_Pkg::findElement::newRequest */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *newRequest)
{
  /* manage_TextMessages_Pkg::findElement::result */ kcg_bool result;
  
  result = ((*fromStore).valid & ((*fromStore).context ==
        con_levelMgmt_DMI_Types_Pkg) & ((*fromStore).whichLevel ==
        (*newRequest).whichLevel)) | ((*fromStore).valid &
      ((*fromStore).context == con_modeChange_DMI_Types_Pkg) &
      ((*fromStore).whichMode == (*newRequest).whichMode)) | accu;
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findElement_manage_TextMessages_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

