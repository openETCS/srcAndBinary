/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DRLRBG_to_int_TM_convers.h"

/* TM_conversions::CAST_Q_DRLRBG_to_int */
kcg_int CAST_Q_DRLRBG_to_int_TM_convers(
  /* TM_conversions::CAST_Q_DRLRBG_to_int::q_drlrbg */ Q_DLRBG q_drlrbg)
{
  /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DRLRBG_to_int::q_drlrbg_int */
  static kcg_int q_drlrbg_int;
  
  IfBlock1_clock = q_drlrbg == ENUM_Q_DLRBG_nominal_TM_convers;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_drlrbg_int = INT_Q_DLRBG_nominal_TM_conversi;
  }
  else {
    _1_else_clock_IfBlock1 = q_drlrbg == ENUM_Q_DLRBG_reverse_TM_convers;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_drlrbg_int = INT_Q_DLRBG_reverse_TM_conversi;
    }
    else {
      else_clock_IfBlock1 = q_drlrbg == ENUM_Q_DLRBG_unknown_TM_convers;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_drlrbg_int = INT_Q_DLRBG_unknown_TM_conversi;
      }
      else {
        q_drlrbg_int = INT_Q_DLRBG_unknown_TM_conversi;
      }
    }
  }
  return q_drlrbg_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_DRLRBG_to_int_TM_convers.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

