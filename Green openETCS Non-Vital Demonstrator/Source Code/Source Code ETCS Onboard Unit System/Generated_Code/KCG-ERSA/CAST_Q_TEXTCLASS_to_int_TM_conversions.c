/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_TEXTCLASS_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_TEXTCLASS_to_int */
kcg_int CAST_Q_TEXTCLASS_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::q_textclass_int */ Q_TEXTCLASS q_textclass_int)
{
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::d */ kcg_int d;
  
  IfBlock1_clock = q_textclass_int == ENUM_Q_TEXTCLASS_important_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    d = INT_Q_TEXTCLASS_important_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_textclass_int ==
      ENUM_Q_TEXTCLASS_aux_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      d = INT_Q_TEXTCLASS_aux_TM_conversions;
    }
    else {
      d = INT_Q_TEXTCLASS_important_TM_conversions;
    }
  }
  return d;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_TEXTCLASS_to_int_TM_conversions.c
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

