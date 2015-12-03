/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StoreRaw_NV_TA_Storage.h"

#ifndef KCG_USER_DEFINED_INIT
void StoreRaw_NV_init_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC)
{
  static kcg_int i;
  
  outC->vald_NV = kcg_true;
  outC->new_NV = kcg_true;
  outC->init = kcg_true;
  outC->NV_onboard_out.valid = kcg_true;
  outC->NV_onboard_out.q_dir = Q_DIR_Reverse;
  outC->NV_onboard_out.q_scale = Q_SCALE_10_cm_scale;
  outC->NV_onboard_out.d_validnv = 0;
  outC->NV_onboard_out.n_iter = 0;
  for (i = 0; i < 32; i++) {
    outC->NV_onboard_out.SECTIONS[i].valid = kcg_true;
    outC->NV_onboard_out.SECTIONS[i].nid_c = 0;
  }
  outC->NV_onboard_out.v_nvshunt = 0;
  outC->NV_onboard_out.v_nvstff = 0;
  outC->NV_onboard_out.v_nvonsight = 0;
  outC->NV_onboard_out.v_nvunfit = 0;
  outC->NV_onboard_out.v_nvrel = 0;
  outC->NV_onboard_out.d_nvroll = 0;
  outC->NV_onboard_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->NV_onboard_out.q_nvemrrls = _50_Q_NVEMRRLS_Revoke_emergency;
  outC->NV_onboard_out.v_nvallowovtrp = 0;
  outC->NV_onboard_out.v_nvsopovtrp = 0;
  outC->NV_onboard_out.d_nvovtrp = 0;
  outC->NV_onboard_out.t_nvovtrp = 0;
  outC->NV_onboard_out.d_nvpotrp = 0;
  outC->NV_onboard_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->NV_onboard_out.t_nvcontact = 0;
  outC->NV_onboard_out.m_nvderun = M_NVDERUN_No;
  outC->NV_onboard_out.d_nvstff = 0;
  outC->NV_onboard_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void StoreRaw_NV_reset_TA_Storage(outC_StoreRaw_NV_TA_Storage *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_Storage::StoreRaw_NV */
void StoreRaw_NV_TA_Storage(
  /* TA_Storage::StoreRaw_NV::mesaage_in */ ReceivedMessage_T_Common_Types_ *mesaage_in,
  outC_StoreRaw_NV_TA_Storage *outC)
{
  /* TA_Storage::StoreRaw_NV::_L22 */
  static P003V1_OBU_T_TM_baseline2 _L22;
  
  /* 3 */
  Read_P003V1_TM_baseline2(&(*mesaage_in).packets, &outC->new_NV, &_L22);
  /* ck_new_NV */ if (outC->new_NV) {
    /* 3 */ NV_storage_TA_Storage(&_L22, &outC->vald_NV, &outC->NV_onboard_out);
  }
  else if (outC->init) {
    outC->vald_NV = kcg_false;
    kcg_copy_P003V1_OBU_T_TM_baseli(
      &outC->NV_onboard_out,
      (P003V1_OBU_T_TM_baseline2 *) &INIT_P3V1_TA_Storage);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** StoreRaw_NV_TA_Storage.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

