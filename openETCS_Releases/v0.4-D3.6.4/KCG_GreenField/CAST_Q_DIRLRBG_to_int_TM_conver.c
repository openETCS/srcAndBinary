/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DIRLRBG_to_int_TM_conver.h"

/* TM_conversions::CAST_Q_DIRLRBG_to_int */
kcg_int CAST_Q_DIRLRBG_to_int_TM_conver(
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg */ Q_DIRLRBG q_dirlrbg)
{
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */
  static kcg_int q_dirlrbg_int;
  
  IfBlock1_clock = q_dirlrbg == ENUM_Q_DIRLRBG_nominal_TM_conve;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dirlrbg_int = INT_Q_DIRLRBG_nominal_TM_conver;
  }
  else {
    _1_else_clock_IfBlock1 = q_dirlrbg == ENUM_Q_DIRLRBG_reverse_TM_conve;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_dirlrbg_int = INT_Q_DIRLRBG_reverse_TM_conver;
    }
    else {
      else_clock_IfBlock1 = q_dirlrbg == ENUM_Q_DIRLRBG_unknown_TM_conve;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_dirlrbg_int = INT_Q_DIRLRBG_unknown_TM_conver;
      }
      else {
        q_dirlrbg_int = INT_Q_DIRLRBG_unknown_TM_conver;
      }
    }
  }
  return q_dirlrbg_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_DIRLRBG_to_int_TM_conver.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

