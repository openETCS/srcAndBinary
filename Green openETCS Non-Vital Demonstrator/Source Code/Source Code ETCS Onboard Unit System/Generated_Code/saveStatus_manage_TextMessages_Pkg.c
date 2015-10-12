/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "saveStatus_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::saveStatus */
void saveStatus_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::saveStatus::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::saveStatus::inStatusElement */ DMI_TXT_MSG_status_T_DMI_Types_Pkg *inStatusElement,
  /* manage_TextMessages_Pkg::saveStatus::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList)
{
  /* manage_TextMessages_Pkg::saveStatus */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* manage_TextMessages_Pkg::saveStatus::_L5 */
  static kcg_int _L5;
  
  /* 1 */ for (i = 0; i < 31; i++) {
    /* 1 */
    setNew_manage_TextMessages_Pkg(
      i,
      &(*inStatusList)[i],
      inStatusElement,
      &cond_iterw,
      &(*outStatusList)[i]);
    _L5 = i + 1;
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L5; i < 31; i++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &(*outStatusList)[i],
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** saveStatus_manage_TextMessages_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

