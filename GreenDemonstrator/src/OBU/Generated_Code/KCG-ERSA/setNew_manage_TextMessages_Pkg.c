/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setNew_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::setNew */
void setNew_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::setNew::indexMAPwi */ kcg_int indexMAPwi,
  /* manage_TextMessages_Pkg::setNew::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* manage_TextMessages_Pkg::setNew::actualTextMsg */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *actualTextMsg,
  /* manage_TextMessages_Pkg::setNew::continue */ kcg_bool *_1_continue,
  /* manage_TextMessages_Pkg::setNew::toStore */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *toStore)
{
  /* manage_TextMessages_Pkg::setNew::takeIt */ kcg_bool takeIt;
  
  takeIt = !(*fromStore).valid;
  /* ck_takeIt */ if (takeIt) {
    *_1_continue = kcg_false;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(toStore, actualTextMsg);
    (*toStore).dmi_textMessageID = indexMAPwi;
  }
  else {
    *_1_continue = kcg_true;
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(toStore, fromStore);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setNew_manage_TextMessages_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */
