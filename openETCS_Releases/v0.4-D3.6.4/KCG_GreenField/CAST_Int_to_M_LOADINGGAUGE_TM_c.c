/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LOADINGGAUGE_TM_c.h"

/* TM_conversions::CAST_Int_to_M_LOADINGGAUGE */
M_LOADINGGAUGE CAST_Int_to_M_LOADINGGAUGE_TM_c(
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::m_loadinggauge_int */ kcg_int m_loadinggauge_int)
{
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::m_loadinggauge */
  static M_LOADINGGAUGE m_loadinggauge;
  
  IfBlock1_clock = m_loadinggauge_int == INT_M_LOADINGGAUGE_G1_TM_conver;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_loadinggauge = ENUM_M_LOADINGGAUGE_G1_TM_conve;
  }
  else {
    _3_else_clock_IfBlock1 = m_loadinggauge_int ==
      INT_M_LOADINGGAUGE_GA_TM_conver;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_loadinggauge = ENUM_M_LOADINGGAUGE_GA_TM_conve;
    }
    else {
      _2_else_clock_IfBlock1 = m_loadinggauge_int ==
        INT_M_LOADINGGAUGE_GB_TM_conver;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_loadinggauge = ENUM_M_LOADINGGAUGE_GB_TM_conve;
      }
      else {
        _1_else_clock_IfBlock1 = m_loadinggauge_int ==
          INT_M_LOADINGGAUGE_GC_TM_conver;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_loadinggauge = ENUM_M_LOADINGGAUGE_GC_TM_conve;
        }
        else {
          else_clock_IfBlock1 = m_loadinggauge_int ==
            INT_M_LOADINGGAUGE_does_not_fit;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_loadinggauge = ENUM_M_LOADINGGAUGE_does_not_fi;
          }
          else {
            m_loadinggauge = ENUM_M_LOADINGGAUGE_does_not_fi;
          }
        }
      }
    }
  }
  return m_loadinggauge;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_LOADINGGAUGE_TM_c.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

