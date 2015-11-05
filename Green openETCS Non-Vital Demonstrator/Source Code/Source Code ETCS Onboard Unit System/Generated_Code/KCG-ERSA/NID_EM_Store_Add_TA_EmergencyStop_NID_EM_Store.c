/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add */
void NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inAcc */ NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inEntry */ NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::outAcc */ NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *outAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::outEntry */ NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *outEntry)
{
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L7 */
  static kcg_bool _L7;
  
  _L7 = !(*inAcc).handled & !(*inEntry).valid;
  /* 1 */ if (_L7) {
    (*outEntry).nid_em = (*inAcc).nid_em;
    (*outEntry).valid = kcg_true;
    (*outAcc).handled = kcg_true;
    (*outAcc).nid_em = (*inAcc).nid_em;
    (*outAcc).nfree = (*inAcc).nfree - 1;
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(outAcc, inAcc);
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      outEntry,
      inEntry);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

