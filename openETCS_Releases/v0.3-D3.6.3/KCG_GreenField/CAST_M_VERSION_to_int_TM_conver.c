/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_VERSION_to_int_TM_conver.h"

/* TM_conversions::CAST_M_VERSION_to_int */
kcg_int CAST_M_VERSION_to_int_TM_conver(
  /* TM_conversions::CAST_M_VERSION_to_int::m_version */ M_VERSION m_version)
{
  /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VERSION_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_VERSION_to_int::m_version_int */
  static kcg_int m_version_int;
  
  IfBlock1_clock = m_version == ENUM_M_VERSION_Previous_version;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_version_int = INT_M_VERSION_previous_M_TM_con;
  }
  else {
    _2_else_clock_IfBlock1 = m_version == ENUM_M_VERSION_Version_1_0_TM_c;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      m_version_int = INT_M_VERSION_1_0_TM_conversion;
    }
    else {
      _1_else_clock_IfBlock1 = m_version == ENUM_M_VERSION_Version_1_1_TM_c;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        m_version_int = INT_M_VERSION_1_1_TM_conversion;
      }
      else {
        else_clock_IfBlock1 = m_version == ENUM_M_VERSION_Version_2_0_TM_c;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          m_version_int = INT_M_VERSION_2_0_TM_conversion;
        }
        else {
          m_version_int = INT_M_VERSION_previous_M_TM_con;
        }
      }
    }
  }
  return m_version_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_VERSION_to_int_TM_conver.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

