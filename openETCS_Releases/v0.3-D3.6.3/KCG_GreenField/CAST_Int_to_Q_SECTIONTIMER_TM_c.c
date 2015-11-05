/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_SECTIONTIMER_TM_c.h"

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER */
Q_SECTIONTIMER CAST_Int_to_Q_SECTIONTIMER_TM_c(
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer_int */ kcg_int q_sectiontimer_int)
{
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer */
  static Q_SECTIONTIMER q_sectiontimer;
  
  IfBlock1_clock = q_sectiontimer_int == INT_Q_SECTIONTIMER_sectiontimer;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_sectiontimer = ENUM_Q_SECTIONTIMER_sectiontime;
  }
  else {
    else_clock_IfBlock1 = q_sectiontimer_int == INT_Q_SECTIONTIMER_no_sectionti;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_sectiontimer = ENUM_Q_SECTIONTIMER_no_sectiont;
    }
    else {
      q_sectiontimer = ENUM_Q_SECTIONTIMER_sectiontime;
    }
  }
  return q_sectiontimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_SECTIONTIMER_TM_c.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

