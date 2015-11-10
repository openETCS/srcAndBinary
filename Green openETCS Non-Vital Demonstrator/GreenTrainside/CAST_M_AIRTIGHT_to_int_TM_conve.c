/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_AIRTIGHT_to_int_TM_conve.h"

/* TM_conversions::CAST_M_AIRTIGHT_to_int */
kcg_int CAST_M_AIRTIGHT_to_int_TM_conve(
  /* TM_conversions::CAST_M_AIRTIGHT_to_int::m_airtight */ M_AIRTIGHT m_airtight)
{
  /* TM_conversions::CAST_M_AIRTIGHT_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_AIRTIGHT_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_AIRTIGHT_to_int::m_airtight_int */
  static kcg_int m_airtight_int;
  
  IfBlock1_clock = m_airtight == ENUM_M_AIRTIGHT_fitted_TM_conve;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_airtight_int = INT_M_AIRTIGHT_fitted_TM_conver;
  }
  else {
    else_clock_IfBlock1 = m_airtight == ENUM_M_AIRTIGHT_not_fitted_TM_c;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m_airtight_int = INT_M_AIRTIGHT_not_fitted_TM_co;
    }
    else {
      m_airtight_int = INT_M_AIRTIGHT_not_fitted_TM_co;
    }
  }
  return m_airtight_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_AIRTIGHT_to_int_TM_conve.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

