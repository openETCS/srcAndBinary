/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_SLEEPSESSION_TM_c.h"

/* TM_conversions::CAST_Int_to_Q_SLEEPSESSION */
Q_SLEEPSESSION CAST_Int_to_Q_SLEEPSESSION_TM_c(
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession_int */ kcg_int q_sleepsession_int)
{
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession */
  static Q_SLEEPSESSION q_sleepsession;
  
  IfBlock1_clock = q_sleepsession_int == INT_Q_SLEEPSESSION_execute_TM_c;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_sleepsession = ENUM_Q_SLEEPSESSION_execute_TM_;
  }
  else {
    else_clock_IfBlock1 = q_sleepsession_int == INT_Q_SLEEPSESSION_ignore_TM_co;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_sleepsession = ENUM_Q_SLEEPSESSION_ignore_TM_c;
    }
    else {
      q_sleepsession = ENUM_Q_SLEEPSESSION_execute_TM_;
    }
  }
  return q_sleepsession;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_SLEEPSESSION_TM_c.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

