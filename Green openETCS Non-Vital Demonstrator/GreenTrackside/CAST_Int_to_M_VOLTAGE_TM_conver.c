/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_VOLTAGE_TM_conver.h"

/* TM_conversions::CAST_Int_to_M_VOLTAGE */
M_VOLTAGE CAST_Int_to_M_VOLTAGE_TM_conver(
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage_int */ kcg_int m_voltage_int)
{
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE m_voltage;
  
  IfBlock1_clock = m_voltage_int == INT_M_VOLTAGE_Line_not_fitted_T;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_voltage = ENUM_M_VOLTAGE_Line_not_fitted_;
  }
  else {
    _4_else_clock_IfBlock1 = m_voltage_int == INT_M_VOLTAGE_AC_25_kV_50_Hz_TM;
    /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
      m_voltage = ENUM_M_VOLTAGE_AC_25_kV_50_Hz_T;
    }
    else {
      _3_else_clock_IfBlock1 = m_voltage_int == INT_M_VOLTAGE_AC_15_kV_16_7_Hz_;
      /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
        m_voltage = ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz;
      }
      else {
        _2_else_clock_IfBlock1 = m_voltage_int ==
          INT_M_VOLTAGE_DC_3_kV_TM_conver;
        /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
          m_voltage = ENUM_M_VOLTAGE_DC_3_kV_TM_conve;
        }
        else {
          _1_else_clock_IfBlock1 = m_voltage_int ==
            INT_M_VOLTAGE_DC_1_5_kV_TM_conv;
          /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
            m_voltage = ENUM_M_VOLTAGE_DC_1_5_kV_TM_con;
          }
          else {
            else_clock_IfBlock1 = m_voltage_int ==
              INT_M_VOLTAGE_DC_600_or_750_V_T;
            /* ck_anon_activ */ if (else_clock_IfBlock1) {
              m_voltage = ENUM_M_VOLTAGE_DC_600_or_750_V_;
            }
            else {
              m_voltage = ENUM_M_VOLTAGE_Line_not_fitted_;
            }
          }
        }
      }
    }
  }
  return m_voltage;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_VOLTAGE_TM_conver.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

