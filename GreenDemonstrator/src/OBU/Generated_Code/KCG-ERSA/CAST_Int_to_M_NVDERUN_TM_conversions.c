/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVDERUN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_NVDERUN */
M_NVDERUN CAST_Int_to_M_NVDERUN_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun_int */ kcg_int m_nvderun_int)
{
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */ M_NVDERUN m_nvderun;
  
  IfBlock1_clock = m_nvderun_int == INT_M_NVDERUN_no_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_nvderun = ENUM_M_NVDERUN_no_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = m_nvderun_int == INT_M_NVDERUN_yes_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m_nvderun = ENUM_M_NVDERUN_yes_TM_conversions;
    }
    else {
      m_nvderun = ENUM_M_NVDERUN_yes_TM_conversions;
    }
  }
  return m_nvderun;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_NVDERUN_TM_conversions.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

