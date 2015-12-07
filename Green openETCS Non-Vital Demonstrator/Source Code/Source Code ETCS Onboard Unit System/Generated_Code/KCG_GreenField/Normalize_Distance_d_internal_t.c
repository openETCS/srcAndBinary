/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Distance_d_internal_t.h"

/* TA_Lib_internal::Normalize_Distance_d_internal_t */
L_internal_Type_Obu_BasicTypes_ Normalize_Distance_d_internal_t(
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::q_scale */ Q_SCALE q_scale,
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d */ kcg_int d)
{
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */
  static L_internal_Type_Obu_BasicTypes_ d_internal;
  
  IfBlock1_clock = q_scale == ENUM_Q_SCALE_10cm_TM_conversion;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    d_internal = d * 10;
  }
  else {
    else_clock_IfBlock1 = q_scale == ENUM_Q_SCALE_1m_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      d_internal = d * 100;
    }
    else {
      d_internal = d * 1000;
    }
  }
  return d_internal;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Distance_d_internal_t.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

