/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_UPDOWN */
Q_UPDOWN CAST_Int_to_Q_UPDOWN_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown_int */ kcg_int q_updown_int)
{
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */ Q_UPDOWN q_updown;
  
  IfBlock1_clock = q_updown_int == INT_Q_UPDOWN_downlink_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_updown = ENUM_Q_UPDOWN_downlink_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_updown_int == INT_Q_UPDOWN_uplink_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_updown = ENUM_Q_UPDOWN_uplink_TM_conversions;
    }
    else {
      q_updown = ENUM_Q_UPDOWN_downlink_TM_conversions;
    }
  }
  return q_updown;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_UPDOWN_TM_conversions.c
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

