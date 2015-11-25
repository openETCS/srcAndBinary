/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SECTIONTIMER_to_bool_TM_conversions.h"

/* TM_conversions::CAST_Q_SECTIONTIMER_to_bool */
kcg_bool CAST_Q_SECTIONTIMER_to_bool_TM_conversions(
  /* TM_conversions::CAST_Q_SECTIONTIMER_to_bool::q_sectiontimer */ Q_SECTIONTIMER q_sectiontimer)
{
  /* TM_conversions::CAST_Q_SECTIONTIMER_to_bool::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_SECTIONTIMER_to_bool::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_SECTIONTIMER_to_bool::q_sectiontimer_bool */ kcg_bool q_sectiontimer_bool;
  
  IfBlock1_clock = q_sectiontimer ==
    ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_sectiontimer_bool = kcg_true;
  }
  else {
    else_clock_IfBlock1 = q_sectiontimer ==
      ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_sectiontimer_bool = kcg_false;
    }
    else {
      q_sectiontimer_bool = kcg_true;
    }
  }
  return q_sectiontimer_bool;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_SECTIONTIMER_to_bool_TM_conversions.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

