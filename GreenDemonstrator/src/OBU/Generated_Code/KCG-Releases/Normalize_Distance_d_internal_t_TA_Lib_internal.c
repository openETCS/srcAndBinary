/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Distance_d_internal_t_TA_Lib_internal.h"

/* TA_Lib_internal::Normalize_Distance_d_internal_t */
L_internal_Type_Obu_BasicTypes_Pkg Normalize_Distance_d_internal_t_TA_Lib_internal(
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::q_scale */ Q_SCALE q_scale,
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d */ kcg_int d)
{
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */
  static L_internal_Type_Obu_BasicTypes_Pkg d_internal;
  
  IfBlock1_clock = q_scale == ENUM_Q_SCALE_10cm_TM_conversions;
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
** Normalize_Distance_d_internal_t_TA_Lib_internal.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */
