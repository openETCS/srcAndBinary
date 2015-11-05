/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ADHESION_TM_conve.h"

/* TM_conversions::CAST_Int_to_M_ADHESION */
M_ADHESION CAST_Int_to_M_ADHESION_TM_conve(
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion_int */ kcg_int m_adhesion_int)
{
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion */
  static M_ADHESION m_adhesion;
  
  IfBlock1_clock = m_adhesion_int == INT_M_ADHESION_slippery_rail_TM;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_adhesion = ENUM_M_ADHESION_slippery_rail_T;
  }
  else {
    else_clock_IfBlock1 = m_adhesion_int == INT_M_ADHESION_no_slippery_rail;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      m_adhesion = ENUM_M_ADHESION_no_slippery_rai;
    }
    else {
      m_adhesion = ENUM_M_ADHESION_slippery_rail_T;
    }
  }
  return m_adhesion;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_ADHESION_TM_conve.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

