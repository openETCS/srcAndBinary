/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_SCALE_to_int */
kcg_int CAST_Q_SCALE_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_SCALE_to_int::q_scale_int */ Q_SCALE q_scale_int)
{
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */
  static kcg_int d;
  
  IfBlock1_clock = q_scale_int == ENUM_Q_SCALE_10cm_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    d = INT_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_scale_int == ENUM_Q_SCALE_1m_TM_conversions;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      d = INT_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_scale_int == ENUM_Q_SCALE_10m_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        d = INT_Q_SCALE_10m_TM_conversions;
      }
      else {
        d = INT_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  return d;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_SCALE_to_int_TM_conversions.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

