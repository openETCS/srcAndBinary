/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVSBTSMPERM_TM_co.h"

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM */
Q_NVSBTSMPERM CAST_Int_to_Q_NVSBTSMPERM_TM_co(
  /* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM::q_nvsbtsmperm_int */ kcg_int q_nvsbtsmperm_int)
{
  /* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM::q_nvsbtsmperm */
  static Q_NVSBTSMPERM q_nvsbtsmperm;
  
  IfBlock1_clock = q_nvsbtsmperm_int == INT_Q_NVSBTSMPERM_Yes_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_Yes_TM_conve;
  }
  else {
    else_clock_IfBlock1 = q_nvsbtsmperm_int == INT_Q_NVSBTSMPERM_No_TM_convers;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_No_TM_conver;
    }
    else {
      q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_No_TM_conver;
    }
  }
  return q_nvsbtsmperm;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_NVSBTSMPERM_TM_co.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

