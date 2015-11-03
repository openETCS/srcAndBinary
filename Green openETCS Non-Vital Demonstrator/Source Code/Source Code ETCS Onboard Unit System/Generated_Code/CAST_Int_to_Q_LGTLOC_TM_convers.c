/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LGTLOC_TM_convers.h"

/* TM_conversions::CAST_Int_to_Q_LGTLOC */
Q_LGTLOC CAST_Int_to_Q_LGTLOC_TM_convers(
  /* TM_conversions::CAST_Int_to_Q_LGTLOC::q_lgtloc_int */ kcg_int q_lgtloc_int)
{
  /* TM_conversions::CAST_Int_to_Q_LGTLOC::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LGTLOC::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LGTLOC::q_lgtloc */
  static Q_LGTLOC q_lgtloc;
  
  IfBlock1_clock = q_lgtloc_int == INT_Q_LGTLOC_max_safe_front_end;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_lgtloc = ENUM_Q_LGTLOC_max_safe_front_en;
  }
  else {
    else_clock_IfBlock1 = q_lgtloc_int == INT_Q_LGTLOC_min_safe_rear_end_;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_lgtloc = ENUM_Q_LGTLOC_min_safe_rear_end;
    }
    else {
      q_lgtloc = ENUM_Q_LGTLOC_max_safe_front_en;
    }
  }
  return q_lgtloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LGTLOC_TM_convers.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

