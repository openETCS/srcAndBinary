/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isSendingNeeded_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void isSendingNeeded_init_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  outC->sendingNeeded = kcg_true;
  outC->init = kcg_true;
  outC->lastDMI_Update = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void isSendingNeeded_reset_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::isSendingNeeded */
void isSendingNeeded_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::isSendingNeeded::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::isSendingNeeded::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L1 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L1;
  
  /* last_init_ck_lastDMI_Update */ if (outC->init) {
    outC->init = kcg_false;
    _L1 = 0;
  }
  else {
    _L1 = outC->lastDMI_Update;
  }
  outC->sendingNeeded = ((inSystemTime >= ctimeInterval_manage_DMI_Output_Pkg +
        _L1) | (_L1 == 0)) & (*incurrentDMIStatus).DMI_Active;
  /* 1 */ if (outC->sendingNeeded) {
    outC->lastDMI_Update = inSystemTime;
  }
  else {
    outC->lastDMI_Update = _L1;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isSendingNeeded_manage_DMI_Output_Pkg.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

