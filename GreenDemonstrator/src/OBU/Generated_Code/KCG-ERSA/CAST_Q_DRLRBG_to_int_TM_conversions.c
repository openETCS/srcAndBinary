/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DRLRBG_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_DRLRBG_to_int */
kcg_int CAST_Q_DRLRBG_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_DRLRBG_to_int::q_drlrbg */ Q_DLRBG q_drlrbg)
{
  /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DRLRBG_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DRLRBG_to_int::q_drlrbg_int */ kcg_int q_drlrbg_int;
  
  IfBlock1_clock = q_drlrbg == ENUM_Q_DLRBG_nominal_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_drlrbg_int = INT_Q_DLRBG_nominal_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_drlrbg == ENUM_Q_DLRBG_reverse_TM_conversions;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_drlrbg_int = INT_Q_DLRBG_reverse_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_drlrbg == ENUM_Q_DLRBG_unknown_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_drlrbg_int = INT_Q_DLRBG_unknown_TM_conversions;
      }
      else {
        q_drlrbg_int = INT_Q_DLRBG_unknown_TM_conversions;
      }
    }
  }
  return q_drlrbg_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_DRLRBG_to_int_TM_conversions.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

