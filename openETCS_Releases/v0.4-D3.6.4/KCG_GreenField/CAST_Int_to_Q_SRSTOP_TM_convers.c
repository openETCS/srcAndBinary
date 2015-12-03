/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_SRSTOP_TM_convers.h"

/* TM_conversions::CAST_Int_to_Q_SRSTOP */
Q_SRSTOP CAST_Int_to_Q_SRSTOP_TM_convers(
  /* TM_conversions::CAST_Int_to_Q_SRSTOP::q_srstop_int */ kcg_int q_srstop_int)
{
  /* TM_conversions::CAST_Int_to_Q_SRSTOP::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SRSTOP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_SRSTOP::q_srstop */
  static Q_SRSTOP q_srstop;
  
  IfBlock1_clock = q_srstop_int == INT_Q_SRSTOP_go_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_srstop = ENUM_Q_SRSTOP_go_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_srstop_int == INT_Q_SRSTOP_stop_TM_conversion;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_srstop = ENUM_Q_SRSTOP_stop_TM_conversio;
    }
    else {
      q_srstop = ENUM_Q_SRSTOP_stop_TM_conversio;
    }
  }
  return q_srstop;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_SRSTOP_TM_convers.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

