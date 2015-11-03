/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LOC_TM_conversion.h"

/* TM_conversions::CAST_Int_to_M_LOC */
M_LOC CAST_Int_to_M_LOC_TM_conversion(
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc_int */ kcg_int m_loc_int)
{
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc */
  static M_LOC m_loc;
  
  IfBlock1_clock = m_loc_int == INT_M_LOC_every_LRBG_TM_convers;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_loc = ENUM_M_LOC_every_LRBG_TM_conver;
  }
  else {
    _1_else_clock_IfBlock1 = m_loc_int == INT_M_LOC_not_when_LRBG_TM_conv;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      m_loc = ENUM_M_LOC_not_when_LRBG_TM_con;
    }
    else {
      else_clock_IfBlock1 = m_loc_int == INT_M_LOC_now_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        m_loc = ENUM_M_LOC_now_TM_conversions;
      }
      else {
        m_loc = ENUM_M_LOC_now_TM_conversions;
      }
    }
  }
  return m_loc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_LOC_TM_conversion.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

