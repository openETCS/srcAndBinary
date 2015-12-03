/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setNew_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::setNew */
void setNew_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::setNew::indexMAPwi */ kcg_int indexMAPwi,
  /* manage_TextMessages_Pkg::setNew::fromStore */ DMI_TXT_MSG_status_T_DMI_Types_ *fromStore,
  /* manage_TextMessages_Pkg::setNew::actualTextMsg */ DMI_TXT_MSG_status_T_DMI_Types_ *actualTextMsg,
  /* manage_TextMessages_Pkg::setNew::continue */ kcg_bool *_1_continue,
  /* manage_TextMessages_Pkg::setNew::toStore */ DMI_TXT_MSG_status_T_DMI_Types_ *toStore)
{
  /* manage_TextMessages_Pkg::setNew::takeIt */
  static kcg_bool takeIt;
  
  takeIt = !(*fromStore).valid;
  /* ck_takeIt */ if (takeIt) {
    *_1_continue = kcg_false;
    kcg_copy_DMI_TXT_MSG_status_T_D(toStore, actualTextMsg);
    (*toStore).dmi_textMessageID = indexMAPwi;
  }
  else {
    *_1_continue = kcg_true;
    kcg_copy_DMI_TXT_MSG_status_T_D(toStore, fromStore);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setNew_manage_TextMessages_Pkg.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

