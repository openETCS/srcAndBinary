/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MAMODE_TM_convers.h"

/* TM_conversions::CAST_Int_to_M_MAMODE */
M_MAMODE CAST_Int_to_M_MAMODE_TM_convers(
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
  
  IfBlock1_clock = m_mamode_int == INT_M_MAMODE_on_sight_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_mamode = ENUM_M_MAMODE_on_sight_TM_conve;
  }
  else {
    _1_else_clock_IfBlock1 = m_mamode_int == INT_M_MAMODE_limited_supervisio;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      m_mamode = ENUM_M_MAMODE_limited_supervisi;
    }
    else {
      else_clock_IfBlock1 = m_mamode_int == INT_M_MAMODE_shunting_TM_conver;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        m_mamode = ENUM_M_MAMODE_shunting_TM_conve;
      }
      else {
        m_mamode = ENUM_M_MAMODE_on_sight_TM_conve;
      }
    }
  }
  return m_mamode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_MAMODE_TM_convers.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

