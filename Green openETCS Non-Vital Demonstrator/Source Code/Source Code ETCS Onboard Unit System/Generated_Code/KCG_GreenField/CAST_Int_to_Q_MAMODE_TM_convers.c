/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_MAMODE_TM_convers.h"

/* TM_conversions::CAST_Int_to_Q_MAMODE */
Q_MAMODE CAST_Int_to_Q_MAMODE_TM_convers(
  /* TM_conversions::CAST_Int_to_Q_MAMODE::q_mamode_int */ kcg_int q_mamode_int)
{
  /* TM_conversions::CAST_Int_to_Q_MAMODE::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_MAMODE::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_MAMODE::q_mamode */
  static Q_MAMODE q_mamode;
  
  IfBlock1_clock = q_mamode_int == INT_Q_MAMODE_as_EOA_TM_conversi;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_mamode = ENUM_Q_MAMODE_as_EOA_TM_convers;
  }
  else {
    else_clock_IfBlock1 = q_mamode_int == INT_Q_MAMODE_as_SvL_and_EOA_TM_;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_mamode = ENUM_Q_MAMODE_as_SvL_and_EOA_TM;
    }
    else {
      q_mamode = ENUM_Q_MAMODE_as_EOA_TM_convers;
    }
  }
  return q_mamode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_MAMODE_TM_convers.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

