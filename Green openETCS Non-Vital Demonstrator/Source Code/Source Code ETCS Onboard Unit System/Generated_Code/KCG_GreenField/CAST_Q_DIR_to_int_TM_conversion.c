/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DIR_to_int_TM_conversion.h"

/* TM_conversions::CAST_Q_DIR_to_int */
kcg_int CAST_Q_DIR_to_int_TM_conversion(
  /* TM_conversions::CAST_Q_DIR_to_int::q_dir */ Q_DIR q_dir)
{
  /* TM_conversions::CAST_Q_DIR_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIR_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIR_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DIR_to_int::q_dir_int */
  static kcg_int q_dir_int;
  
  IfBlock1_clock = q_dir == ENUM_Q_DIR_nominal_TM_conversio;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dir_int = INT_Q_DIR_nomiinal_TM_conversio;
  }
  else {
    _1_else_clock_IfBlock1 = q_dir == ENUM_Q_DIR_reverse_TM_conversio;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_dir_int = INT_Q_DIR_reverse_TM_conversion;
    }
    else {
      else_clock_IfBlock1 = q_dir == ENUM_Q_DIR_both_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_dir_int = INT_Q_DIR_both_TM_conversions;
      }
      else {
        q_dir_int = INT_Q_DIR_both_TM_conversions;
      }
    }
  }
  return q_dir_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_DIR_to_int_TM_conversion.c
** Generation date: 2015-11-03T14:28:14
*************************************************************$ */

