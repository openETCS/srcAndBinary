/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_VERSION */
M_VERSION CAST_Int_to_M_VERSION_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version_int */kcg_int m_version_int)
{
  /* TM_conversions::CAST_Int_to_M_VERSION::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VERSION::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VERSION::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VERSION::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _3_m_version;
  
  IfBlock1_clock = m_version_int <= INT_M_VERSION_previous_M_TM_conversions;
  if (IfBlock1_clock) {
    _3_m_version = ENUM_M_VERSION_Previous_versions_TM_conversions;
  }
  else {
    _2_else_clock_IfBlock1 = m_version_int == INT_M_VERSION_1_0_TM_conversions;
    if (_2_else_clock_IfBlock1) {
      _3_m_version = ENUM_M_VERSION_Version_1_0_TM_conversions;
    }
    else {
      _1_else_clock_IfBlock1 = m_version_int ==
        INT_M_VERSION_1_1_TM_conversions;
      if (_1_else_clock_IfBlock1) {
        _3_m_version = ENUM_M_VERSION_Version_1_1_TM_conversions;
      }
      else {
        else_clock_IfBlock1 = m_version_int == INT_M_VERSION_2_0_TM_conversions;
        if (else_clock_IfBlock1) {
          _3_m_version = ENUM_M_VERSION_Version_2_0_TM_conversions;
        }
        else {
          _3_m_version = ENUM_M_VERSION_Previous_versions_TM_conversions;
        }
      }
    }
  }
  return _3_m_version;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_VERSION_TM_conversions.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

