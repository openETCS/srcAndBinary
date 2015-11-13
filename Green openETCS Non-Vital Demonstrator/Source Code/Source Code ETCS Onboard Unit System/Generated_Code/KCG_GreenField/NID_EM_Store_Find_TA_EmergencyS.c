/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Find_TA_EmergencyS.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find */
void NID_EM_Store_Find_TA_EmergencyS(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::inAcc */ NID_EM_STORE_Acc_T_TA_Emergency *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::inEntry */ NID_EM_Store_Item_T_TA_Emergenc *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::outAcc */ NID_EM_STORE_Acc_T_TA_Emergency *outAcc)
{
  /* 1 */ if (((*inAcc).nid_em == (*inEntry).nid_em) & (*inEntry).valid) {
    (*outAcc).handled = kcg_true;
    (*outAcc).nid_em = (*inAcc).nid_em;
    (*outAcc).nfree = (*inAcc).nfree;
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_(outAcc, inAcc);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NID_EM_Store_Find_TA_EmergencyS.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

