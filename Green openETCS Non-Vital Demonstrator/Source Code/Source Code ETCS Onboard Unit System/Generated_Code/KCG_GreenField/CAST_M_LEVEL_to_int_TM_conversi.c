/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LEVEL_to_int_TM_conversi.h"

/* TM_conversions::CAST_M_LEVEL_to_int */
kcg_int CAST_M_LEVEL_to_int_TM_conversi(
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level */ M_LEVEL m_level)
{
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int m_level_int;
  
  IfBlock1_clock = m_level == ENUM_M_LEVEL_Level_0_TM_convers;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_level_int = INT_M_LEVEL_Level_0_TM_conversi;
  }
  else {
    _3_else_clock_IfBlock1 = m_level == ENUM_M_LEVEL_Level_1_TM_convers;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_level_int = INT_M_LEVEL_Level_1_TM_conversi;
    }
    else {
      _2_else_clock_IfBlock1 = m_level == ENUM_M_LEVEL_Level_2_TM_convers;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_level_int = INT_M_LEVEL_Level_2_TM_conversi;
      }
      else {
        _1_else_clock_IfBlock1 = m_level == ENUM_M_LEVEL_Level_3_TM_convers;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_level_int = INT_M_LEVEL_Level_3_TM_conversi;
        }
        else {
          else_clock_IfBlock1 = m_level == ENUM_M_LEVEL_Level_NTC_TM_conve;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_level_int = INT_M_LEVEL_Level_NTC_TM_conver;
          }
          else {
            m_level_int = INT_M_LEVEL_Level_NTC_TM_conver;
          }
        }
      }
    }
  }
  return m_level_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_LEVEL_to_int_TM_conversi.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

