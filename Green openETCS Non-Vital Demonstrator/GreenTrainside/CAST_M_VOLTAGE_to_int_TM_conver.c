/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_VOLTAGE_to_int_TM_conver.h"

/* TM_conversions::CAST_M_VOLTAGE_to_int */
kcg_int CAST_M_VOLTAGE_to_int_TM_conver(
  /* TM_conversions::CAST_M_VOLTAGE_to_int::m_voltage */ M_VOLTAGE m_voltage)
{
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::m_voltage_int */
  static kcg_int m_voltage_int;
  
  IfBlock1_clock = m_voltage == ENUM_M_VOLTAGE_Line_not_fitted_;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_voltage_int = INT_M_VOLTAGE_Line_not_fitted_T;
  }
  else {
    _4_else_clock_IfBlock1 = m_voltage == ENUM_M_VOLTAGE_AC_25_kV_50_Hz_T;
    /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
      m_voltage_int = INT_M_VOLTAGE_AC_25_kV_50_Hz_TM;
    }
    else {
      _3_else_clock_IfBlock1 = m_voltage == ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz;
      /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
        m_voltage_int = INT_M_VOLTAGE_AC_15_kV_16_7_Hz_;
      }
      else {
        _2_else_clock_IfBlock1 = m_voltage == ENUM_M_VOLTAGE_DC_3_kV_TM_conve;
        /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
          m_voltage_int = INT_M_VOLTAGE_DC_3_kV_TM_conver;
        }
        else {
          _1_else_clock_IfBlock1 = m_voltage == ENUM_M_VOLTAGE_DC_1_5_kV_TM_con;
          /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
            m_voltage_int = INT_M_VOLTAGE_DC_1_5_kV_TM_conv;
          }
          else {
            else_clock_IfBlock1 = m_voltage == ENUM_M_VOLTAGE_DC_600_or_750_V_;
            /* ck_anon_activ */ if (else_clock_IfBlock1) {
              m_voltage_int = INT_M_VOLTAGE_DC_600_or_750_V_T;
            }
            else {
              m_voltage_int = INT_M_VOLTAGE_Line_not_fitted_T;
            }
          }
        }
      }
    }
  }
  return m_voltage_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_VOLTAGE_to_int_TM_conver.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

