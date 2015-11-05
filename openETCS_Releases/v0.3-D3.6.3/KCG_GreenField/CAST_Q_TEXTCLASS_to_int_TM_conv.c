/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_TEXTCLASS_to_int_TM_conv.h"

/* TM_conversions::CAST_Q_TEXTCLASS_to_int */
kcg_int CAST_Q_TEXTCLASS_to_int_TM_conv(
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::q_textclass_int */ Q_TEXTCLASS q_textclass_int)
{
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::d */
  static kcg_int d;
  
  IfBlock1_clock = q_textclass_int == ENUM_Q_TEXTCLASS_important_TM_c;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    d = INT_Q_TEXTCLASS_important_TM_co;
  }
  else {
    else_clock_IfBlock1 = q_textclass_int == ENUM_Q_TEXTCLASS_aux_TM_convers;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      d = INT_Q_TEXTCLASS_aux_TM_conversi;
    }
    else {
      d = INT_Q_TEXTCLASS_important_TM_co;
    }
  }
  return d;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_TEXTCLASS_to_int_TM_conv.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

