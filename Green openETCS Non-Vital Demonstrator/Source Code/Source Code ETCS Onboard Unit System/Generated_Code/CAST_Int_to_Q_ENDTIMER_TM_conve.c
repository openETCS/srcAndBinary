/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_ENDTIMER_TM_conve.h"

/* TM_conversions::CAST_Int_to_Q_ENDTIMER */
Q_ENDTIMER CAST_Int_to_Q_ENDTIMER_TM_conve(
  /* TM_conversions::CAST_Int_to_Q_ENDTIMER::q_endtimer_int */ kcg_int q_endtimer_int)
{
  /* TM_conversions::CAST_Int_to_Q_ENDTIMER::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ENDTIMER::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_ENDTIMER::q_endtimer */
  static Q_ENDTIMER q_endtimer;
  
  IfBlock1_clock = q_endtimer_int == INT_Q_ENDTIMER_no_endsection_ti;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_endtimer = ENUM_Q_ENDTIMER_no_endsection_t;
  }
  else {
    else_clock_IfBlock1 = q_endtimer_int == INT_Q_ENDTIMER_endsection_timer;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_endtimer = ENUM_Q_ENDTIMER_endsection_time;
    }
    else {
      q_endtimer = ENUM_Q_ENDTIMER_endsection_time;
    }
  }
  return q_endtimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_ENDTIMER_TM_conve.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

