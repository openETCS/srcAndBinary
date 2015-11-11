/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_con.h"

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY */
Q_NEWCOUNTRY CAST_Int_to_Q_NEWCOUNTRY_TM_con(
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry_int */ kcg_int q_newcountry_int)
{
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry */
  static Q_NEWCOUNTRY q_newcountry;
  
  IfBlock1_clock = q_newcountry_int == INT_Q_NEWCOUNTRY_same_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_newcountry = ENUM_Q_NEWCOUNTRY_same_TM_conve;
  }
  else {
    else_clock_IfBlock1 = q_newcountry_int == INT_Q_NEWCOUNTRY_not_same_TM_co;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_newcountry = ENUM_Q_NEWCOUNTRY_not_same_TM_c;
    }
    else {
      q_newcountry = ENUM_Q_NEWCOUNTRY_not_same_TM_c;
    }
  }
  return q_newcountry;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_NEWCOUNTRY_TM_con.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

