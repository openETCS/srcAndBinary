/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_AIRTIGHT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_AIRTIGHT */
M_AIRTIGHT CAST_Int_to_M_AIRTIGHT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::int__m_airtight_in */ kcg_int int__m_airtight_in)
{
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_AIRTIGHT::m_airtight */
  static M_AIRTIGHT m_airtight;
  
  IfBlock1_clock = int__m_airtight_in == INT_M_AIRTIGHT_fitted_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_airtight = ENUM_M_AIRTIGHT_fitted_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = int__m_airtight_in ==
      INT_M_AIRTIGHT_not_fitted_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m_airtight = ENUM_M_AIRTIGHT_not_fitted_TM_conversions;
    }
    else {
      m_airtight = ENUM_M_AIRTIGHT_not_fitted_TM_conversions;
    }
  }
  return m_airtight;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_AIRTIGHT_TM_conversions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

