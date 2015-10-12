/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Unconditional_TA_EmergencyStop.h"

#ifndef KCG_USER_DEFINED_INIT
void ES_Process_Unconditional_init_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  static kcg_int i;
  
  outC->uesActive = kcg_true;
  outC->init = kcg_true;
  outC->store.nfree = 0;
  for (i = 0; i < 8; i++) {
    outC->store.items[i].nid_em = 0;
    outC->store.items[i].valid = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Process_Unconditional_reset_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_EmergencyStop::ES_Process_Unconditional */
void ES_Process_Unconditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Unconditional::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg18 */ kcg_bool receivedMsg18,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Unconditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  /* last_init_ck_store */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &last_store,
      (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *)
        &cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &last_store,
      &outC->store);
  }
  IfBlock1_clock = receivedMsg16 | receivedMsg18;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 2 */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      receivedMsg16,
      receivedMsg18,
      nid_em,
      &last_store,
      &_L6_IfBlock1,
      &outC->store);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &last_store);
  }
  outC->uesActive = outC->store.nfree <
    cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Process_Unconditional_TA_EmergencyStop.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

