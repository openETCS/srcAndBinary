/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MAMODE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_MAMODE */
M_MAMODE CAST_Int_to_M_MAMODE_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_MAMODE::m_mamode_int */ kcg_int m_mamode_int)
{
  /* TM_conversions::CAST_Int_to_M_MAMODE::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MAMODE::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MAMODE::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_MAMODE::m_mamode */
  static M_MAMODE m_mamode;
  
  IfBlock1_clock = m_mamode_int == INT_M_MAMODE_on_sight_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_mamode = ENUM_M_MAMODE_on_sight_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = m_mamode_int ==
      INT_M_MAMODE_limited_supervision_TM_conversions;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      m_mamode = ENUM_M_MAMODE_limited_supervision_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = m_mamode_int ==
        INT_M_MAMODE_shunting_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        m_mamode = ENUM_M_MAMODE_shunting_TM_conversions;
      }
      else {
        m_mamode = ENUM_M_MAMODE_on_sight_TM_conversions;
      }
    }
  }
  return m_mamode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_MAMODE_TM_conversions.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

