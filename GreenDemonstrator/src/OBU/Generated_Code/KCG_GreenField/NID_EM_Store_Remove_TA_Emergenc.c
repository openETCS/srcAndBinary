/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Remove_TA_Emergenc.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove */
void NID_EM_Store_Remove_TA_Emergenc(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inAcc */ NID_EM_STORE_Acc_T_TA_Emergency *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inEntry */ NID_EM_Store_Item_T_TA_Emergenc *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::outAcc */ NID_EM_STORE_Acc_T_TA_Emergency *outAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::outEntry */ NID_EM_Store_Item_T_TA_Emergenc *outEntry)
{
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L1 */
  static kcg_bool _L1;
  
  _L1 = !(*inAcc).handled & (*inEntry).valid & ((*inEntry).nid_em ==
      (*inAcc).nid_em);
  /* 1 */ if (_L1) {
    (*outEntry).nid_em = 0;
    (*outEntry).valid = kcg_false;
    (*outAcc).handled = kcg_true;
    (*outAcc).nid_em = (*inAcc).nid_em;
    (*outAcc).nfree = (*inAcc).nfree + 1;
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_(outAcc, inAcc);
    kcg_copy_NID_EM_Store_Item_T_TA(outEntry, inEntry);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NID_EM_Store_Remove_TA_Emergenc.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

