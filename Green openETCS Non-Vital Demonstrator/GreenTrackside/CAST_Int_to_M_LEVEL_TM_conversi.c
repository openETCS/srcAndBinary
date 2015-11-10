/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LEVEL_TM_conversi.h"

/* TM_conversions::CAST_Int_to_M_LEVEL */
M_LEVEL CAST_Int_to_M_LEVEL_TM_conversi(
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level_int */ kcg_int m_level_int)
{
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */
  static M_LEVEL m_level;
  
  IfBlock1_clock = m_level_int == INT_M_LEVEL_Level_0_TM_conversi;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_level = ENUM_M_LEVEL_Level_0_TM_convers;
  }
  else {
    _3_else_clock_IfBlock1 = m_level_int == INT_M_LEVEL_Level_1_TM_conversi;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_level = ENUM_M_LEVEL_Level_1_TM_convers;
    }
    else {
      _2_else_clock_IfBlock1 = m_level_int == INT_M_LEVEL_Level_2_TM_conversi;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_level = ENUM_M_LEVEL_Level_2_TM_convers;
      }
      else {
        _1_else_clock_IfBlock1 = m_level_int == INT_M_LEVEL_Level_3_TM_conversi;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_level = ENUM_M_LEVEL_Level_3_TM_convers;
        }
        else {
          else_clock_IfBlock1 = m_level_int == INT_M_LEVEL_Level_NTC_TM_conver;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_level = ENUM_M_LEVEL_Level_NTC_TM_conve;
          }
          else {
            m_level = ENUM_M_LEVEL_Level_NTC_TM_conve;
          }
        }
      }
    }
  }
  return m_level;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_LEVEL_TM_conversi.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

