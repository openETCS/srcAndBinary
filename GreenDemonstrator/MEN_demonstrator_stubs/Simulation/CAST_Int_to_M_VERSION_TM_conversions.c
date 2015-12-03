/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"

void CAST_Int_to_M_VERSION_reset_TM_conversions(
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_M_VERSION */
void CAST_Int_to_M_VERSION_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version_int */kcg_int m_version_int,
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _3_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _1_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error11;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _10_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error9;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _8_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _12_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error13;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _14_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error15;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _4_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error5;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _6_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error7;
  kcg_bool noname;
  
  outC->_L4 = m_version_int;
  outC->m_version_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_version_in <=
    INT_M_VERSION_previous_M_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error2 = outC->_L5_IfBlock1;
    outC->error = error2;
  }
  else {
    outC->_2_else_clock_IfBlock1 = outC->m_version_in ==
      INT_M_VERSION_1_0_TM_conversions;
    if (outC->_2_else_clock_IfBlock1) {
      outC->_L53_IfBlock1 = kcg_false;
      error7 = outC->_L53_IfBlock1;
      error = error7;
    }
    else {
      outC->_1_else_clock_IfBlock1 = outC->m_version_in ==
        INT_M_VERSION_1_1_TM_conversions;
      if (outC->_1_else_clock_IfBlock1) {
        outC->_L44_IfBlock1 = kcg_false;
        error11 = outC->_L44_IfBlock1;
        error5 = error11;
      }
      else {
        outC->else_clock_IfBlock1 = outC->m_version_in ==
          INT_M_VERSION_2_0_TM_conversions;
        if (outC->else_clock_IfBlock1) {
          outC->_L45_IfBlock1 = kcg_false;
          error15 = outC->_L45_IfBlock1;
          error9 = error15;
        }
        else {
          outC->_L1_IfBlock1 = kcg_true;
          error13 = outC->_L1_IfBlock1;
          error9 = error13;
        }
        error5 = error9;
      }
      error = error5;
    }
    outC->error = error;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
  if (outC->IfBlock1_clock) {
    outC->_L4_IfBlock1 = ENUM_M_VERSION_Previous_versions_TM_conversions;
    _3_m_version = outC->_L4_IfBlock1;
    outC->_8_m_version = _3_m_version;
  }
  else {
    if (outC->_2_else_clock_IfBlock1) {
      outC->_L3_IfBlock1 = ENUM_M_VERSION_Version_1_0_TM_conversions;
      _6_m_version = outC->_L3_IfBlock1;
      _1_m_version = _6_m_version;
    }
    else {
      if (outC->_1_else_clock_IfBlock1) {
        outC->_L2_IfBlock1 = ENUM_M_VERSION_Version_1_1_TM_conversions;
        _10_m_version = outC->_L2_IfBlock1;
        _4_m_version = _10_m_version;
      }
      else {
        if (outC->else_clock_IfBlock1) {
          outC->_L26_IfBlock1 = ENUM_M_VERSION_Version_2_0_TM_conversions;
          _14_m_version = outC->_L26_IfBlock1;
          _8_m_version = _14_m_version;
        }
        else {
          outC->_L27_IfBlock1 = ENUM_M_VERSION_Previous_versions_TM_conversions;
          _12_m_version = outC->_L27_IfBlock1;
          _8_m_version = _12_m_version;
        }
        _4_m_version = _8_m_version;
      }
      _1_m_version = _4_m_version;
    }
    outC->_8_m_version = _1_m_version;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_VERSION_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

