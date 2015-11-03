/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVDERUN_TM_conver.h"

/* TM_conversions::CAST_Int_to_M_NVDERUN */
M_NVDERUN CAST_Int_to_M_NVDERUN_TM_conver(
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun_int */ kcg_int m_nvderun_int)
{
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */
  static M_NVDERUN m_nvderun;
  
  IfBlock1_clock = m_nvderun_int == INT_M_NVDERUN_no_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_nvderun = ENUM_M_NVDERUN_no_TM_conversion;
  }
  else {
    else_clock_IfBlock1 = m_nvderun_int == INT_M_NVDERUN_yes_TM_conversion;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m_nvderun = ENUM_M_NVDERUN_yes_TM_conversio;
    }
    else {
      m_nvderun = ENUM_M_NVDERUN_yes_TM_conversio;
    }
  }
  return m_nvderun;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_NVDERUN_TM_conver.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

