/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ADHESION_to_int_TM_conve.h"

/* TM_conversions::CAST_M_ADHESION_to_int */
kcg_int CAST_M_ADHESION_to_int_TM_conve(
  /* TM_conversions::CAST_M_ADHESION_to_int::m_adhesion */ M_ADHESION m_adhesion)
{
  /* TM_conversions::CAST_M_ADHESION_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_ADHESION_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_ADHESION_to_int::m_adhesion_int */
  static kcg_int m_adhesion_int;
  
  IfBlock1_clock = m_adhesion == ENUM_M_ADHESION_slippery_rail_T;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_adhesion_int = INT_M_ADHESION_slippery_rail_TM;
  }
  else {
    else_clock_IfBlock1 = m_adhesion == ENUM_M_ADHESION_no_slippery_rai;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m_adhesion_int = INT_M_ADHESION_no_slippery_rail;
    }
    else {
      m_adhesion_int = INT_M_ADHESION_slippery_rail_TM;
    }
  }
  return m_adhesion_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_ADHESION_to_int_TM_conve.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

