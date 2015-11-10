/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_LGTLOC_to_int_TM_convers.h"

/* TM_conversions::CAST_Q_LGTLOC_to_int */
kcg_int CAST_Q_LGTLOC_to_int_TM_convers(
  /* TM_conversions::CAST_Q_LGTLOC_to_int::q_lgtloc */ Q_LGTLOC q_lgtloc)
{
  /* TM_conversions::CAST_Q_LGTLOC_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_LGTLOC_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_LGTLOC_to_int::q_lgtloc_int */
  static kcg_int q_lgtloc_int;
  
  IfBlock1_clock = q_lgtloc == ENUM_Q_LGTLOC_max_safe_front_en;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_lgtloc_int = INT_Q_LGTLOC_max_safe_front_end;
  }
  else {
    else_clock_IfBlock1 = q_lgtloc == ENUM_Q_LGTLOC_min_safe_rear_end;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_lgtloc_int = INT_Q_LGTLOC_min_safe_rear_end_;
    }
    else {
      q_lgtloc_int = INT_Q_LGTLOC_max_safe_front_end;
    }
  }
  return q_lgtloc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_LGTLOC_to_int_TM_convers.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

