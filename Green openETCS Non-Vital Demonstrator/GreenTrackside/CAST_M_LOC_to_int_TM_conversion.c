/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LOC_to_int_TM_conversion.h"

/* TM_conversions::CAST_M_LOC_to_int */
kcg_int CAST_M_LOC_to_int_TM_conversion(
  /* TM_conversions::CAST_M_LOC_to_int::m_loc */ M_LOC m_loc)
{
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int m_loc_int;
  
  IfBlock1_clock = m_loc == ENUM_M_LOC_every_LRBG_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_loc_int = INT_M_LOC_every_LRBG_TM_convers;
  }
  else {
    _1_else_clock_IfBlock1 = m_loc == ENUM_M_LOC_not_when_LRBG_TM_con;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      m_loc_int = INT_M_LOC_not_when_LRBG_TM_conv;
    }
    else {
      else_clock_IfBlock1 = m_loc == ENUM_M_LOC_now_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        m_loc_int = INT_M_LOC_now_TM_conversions;
      }
      else {
        m_loc_int = INT_M_LOC_now_TM_conversions;
      }
    }
  }
  return m_loc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_LOC_to_int_TM_conversion.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

