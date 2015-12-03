/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LEVELTR_TM_conver.h"

/* TM_conversions::CAST_Int_to_M_LEVELTR */
M_LEVELTR CAST_Int_to_M_LEVELTR_TM_conver(
  /* TM_conversions::CAST_Int_to_M_LEVELTR::m_leveltr_int */ kcg_int m_leveltr_int)
{
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::m_leveltr */
  static M_LEVELTR m_leveltr;
  
  IfBlock1_clock = m_leveltr_int == INT_M_LEVELTR_Level_0_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_leveltr = ENUM_M_LEVELTR_Level_0_TM_conve;
  }
  else {
    _3_else_clock_IfBlock1 = m_leveltr_int == INT_M_LEVELTR_Level_1_TM_conver;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_leveltr = ENUM_M_LEVELTR_Level_1_TM_conve;
    }
    else {
      _2_else_clock_IfBlock1 = m_leveltr_int == INT_M_LEVELTR_Level_2_TM_conver;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_leveltr = ENUM_M_LEVELTR_Level_2_TM_conve;
      }
      else {
        _1_else_clock_IfBlock1 = m_leveltr_int ==
          INT_M_LEVELTR_Level_3_TM_conver;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_leveltr = ENUM_M_LEVELTR_Level_3_TM_conve;
        }
        else {
          else_clock_IfBlock1 = m_leveltr_int ==
            INT_M_LEVELTR_Level_NTC_TM_conv;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_leveltr = ENUM_M_LEVELTR_Level_NTC_TM_con;
          }
          else {
            m_leveltr = ENUM_M_LEVELTR_Level_NTC_TM_con;
          }
        }
      }
    }
  }
  return m_leveltr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_LEVELTR_TM_conver.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

