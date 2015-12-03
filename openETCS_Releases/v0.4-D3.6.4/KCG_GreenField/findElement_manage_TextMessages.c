/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findElement_manage_TextMessages.h"

/* manage_TextMessages_Pkg::findElement */
kcg_bool findElement_manage_TextMessages(
  /* manage_TextMessages_Pkg::findElement::accu */ kcg_bool accu,
  /* manage_TextMessages_Pkg::findElement::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_ *fromStore,
  /* manage_TextMessages_Pkg::findElement::newRequest */ DMI_TXT_MSG_status_T_DMI_Types_ *newRequest)
{
  /* manage_TextMessages_Pkg::findElement::result */
  static kcg_bool result;
  
  result = ((*fromStore).valid & ((*fromStore).context ==
        con_levelMgmt_DMI_Types_Pkg) & ((*fromStore).whichLevel ==
        (*newRequest).whichLevel)) | ((*fromStore).valid &
      ((*fromStore).context == con_modeChange_DMI_Types_Pkg) &
      ((*fromStore).whichMode == (*newRequest).whichMode)) | accu;
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findElement_manage_TextMessages.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

