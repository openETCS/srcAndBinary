/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DIRTRAIN_to_int_TM_conve.h"

/* TM_conversions::CAST_Q_DIRTRAIN_to_int */
kcg_int CAST_Q_DIRTRAIN_to_int_TM_conve(
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::q_dirltrain */ Q_DIRTRAIN q_dirltrain)
{
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DIRTRAIN_to_int::q_dirltrain_int */
  static kcg_int q_dirltrain_int;
  
  IfBlock1_clock = q_dirltrain == ENUM_Q_DIRTRAIN_nominal_TM_conv;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dirltrain_int = INT_Q_DIRTRAIN_nominal_TM_conve;
  }
  else {
    _1_else_clock_IfBlock1 = q_dirltrain == ENUM_Q_DIRTRAIN_reverse_TM_conv;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      q_dirltrain_int = INT_Q_DIRTRAIN_reverse_TM_conve;
    }
    else {
      else_clock_IfBlock1 = q_dirltrain == ENUM_Q_DIRTRAIN_unknown_TM_conv;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        q_dirltrain_int = INT_Q_DIRTRAIN_unknown_TM_conve;
      }
      else {
        q_dirltrain_int = INT_Q_DIRTRAIN_unknown_TM_conve;
      }
    }
  }
  return q_dirltrain_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_DIRTRAIN_to_int_TM_conve.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

