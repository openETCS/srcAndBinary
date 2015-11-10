/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVDRIVER_ADHES_TM.h"

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES */
Q_NVDRIVER_ADHES CAST_Int_to_Q_NVDRIVER_ADHES_TM(
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriver_adhes_int */ kcg_int q_nvdriver_adhes_int)
{
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriveradhes */
  static Q_NVDRIVER_ADHES q_nvdriveradhes;
  
  IfBlock1_clock = q_nvdriver_adhes_int == INT_Q_NVDRIVER_ADHES_Allowed_TM;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_nvdriveradhes = ENUM_Q_NVDRIVER_ADHES_Allowed_T;
  }
  else {
    else_clock_IfBlock1 = q_nvdriver_adhes_int ==
      INT_Q_NVDRIVER_ADHES_NotAllowed;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_nvdriveradhes = ENUM_Q_NVDRIVER_ADHES_NotAllowe;
    }
    else {
      q_nvdriveradhes = ENUM_Q_NVDRIVER_ADHES_NotAllowe;
    }
  }
  return q_nvdriveradhes;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_NVDRIVER_ADHES_TM.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

