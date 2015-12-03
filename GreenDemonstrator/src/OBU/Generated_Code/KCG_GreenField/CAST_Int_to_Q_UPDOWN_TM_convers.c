/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_UPDOWN_TM_convers.h"

/* TM_conversions::CAST_Int_to_Q_UPDOWN */
Q_UPDOWN CAST_Int_to_Q_UPDOWN_TM_convers(
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown_int */ kcg_int q_updown_int)
{
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN q_updown;
  
  IfBlock1_clock = q_updown_int == INT_Q_UPDOWN_downlink_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_updown = ENUM_Q_UPDOWN_downlink_TM_conve;
  }
  else {
    else_clock_IfBlock1 = q_updown_int == INT_Q_UPDOWN_uplink_TM_conversi;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_updown = ENUM_Q_UPDOWN_uplink_TM_convers;
    }
    else {
      q_updown = ENUM_Q_UPDOWN_downlink_TM_conve;
    }
  }
  return q_updown;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_UPDOWN_TM_convers.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

