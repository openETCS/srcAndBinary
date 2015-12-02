/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LOADINGGAUGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_LOADINGGAUGE */
M_LOADINGGAUGE CAST_Int_to_M_LOADINGGAUGE_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::m_loadinggauge_int */ kcg_int m_loadinggauge_int)
{
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else */ kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::m_loadinggauge */ M_LOADINGGAUGE m_loadinggauge;
  
  IfBlock1_clock = m_loadinggauge_int == INT_M_LOADINGGAUGE_G1_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_loadinggauge = ENUM_M_LOADINGGAUGE_G1_TM_conversions;
  }
  else {
    _3_else_clock_IfBlock1 = m_loadinggauge_int ==
      INT_M_LOADINGGAUGE_GA_TM_conversions;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_loadinggauge = ENUM_M_LOADINGGAUGE_GA_TM_conversions;
    }
    else {
      _2_else_clock_IfBlock1 = m_loadinggauge_int ==
        INT_M_LOADINGGAUGE_GB_TM_conversions;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_loadinggauge = ENUM_M_LOADINGGAUGE_GB_TM_conversions;
      }
      else {
        _1_else_clock_IfBlock1 = m_loadinggauge_int ==
          INT_M_LOADINGGAUGE_GC_TM_conversions;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_loadinggauge = ENUM_M_LOADINGGAUGE_GC_TM_conversions;
        }
        else {
          else_clock_IfBlock1 = m_loadinggauge_int ==
            INT_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_loadinggauge = ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          }
          else {
            m_loadinggauge = ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          }
        }
      }
    }
  }
  return m_loadinggauge;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_LOADINGGAUGE_TM_conversions.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

