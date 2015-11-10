/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVEMRRLS_TM_conve.h"

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS */
Q_NVEMRRLS CAST_Int_to_Q_NVEMRRLS_TM_conve(
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls_int */ kcg_int q_nvemrrls_int)
{
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */
  static Q_NVEMRRLS q_nvemrrls;
  
  IfBlock1_clock = q_nvemrrls_int == INT_Q_NVEMRRLS_revoke_at_stands;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_nvemrrls = ENUM_Q_NVEMRRLS_revoke_at_stand;
  }
  else {
    else_clock_IfBlock1 = q_nvemrrls_int == INT_Q_NVEMRRLS_revoke_when_no_s;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_nvemrrls = ENUM_Q_NVEMRRLS_revoke_when_no_;
    }
    else {
      q_nvemrrls = ENUM_Q_NVEMRRLS_revoke_at_stand;
    }
  }
  return q_nvemrrls;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_NVEMRRLS_TM_conve.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

