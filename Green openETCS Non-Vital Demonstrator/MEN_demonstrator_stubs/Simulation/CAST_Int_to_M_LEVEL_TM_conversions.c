/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LEVEL_TM_conversions.h"

void CAST_Int_to_M_LEVEL_reset_TM_conversions(
  outC_CAST_Int_to_M_LEVEL_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_M_LEVEL */
void CAST_Int_to_M_LEVEL_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level_int */kcg_int m_level_int,
  outC_CAST_Int_to_M_LEVEL_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _2_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _9_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _7_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error18;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _17_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error16;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _15_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _11_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error12;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _13_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error14;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _3_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_LEVEL::m_level */ M_LEVEL _5_m_level;
  /* TM_conversions::CAST_Int_to_M_LEVEL::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L4 = m_level_int;
  outC->m_level_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_level_in == INT_M_LEVEL_Level_0_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L8_IfBlock1 = ENUM_M_LEVEL_Level_0_TM_conversions;
    outC->_L7_IfBlock1 = kcg_false;
    error1 = outC->_L7_IfBlock1;
    _2_m_level = outC->_L8_IfBlock1;
    outC->m_level = _2_m_level;
    outC->error = error1;
  }
  else {
    outC->_3_else_clock_IfBlock1 = outC->m_level_in ==
      INT_M_LEVEL_Level_1_TM_conversions;
    if (outC->_3_else_clock_IfBlock1) {
      outC->_L74_IfBlock1 = ENUM_M_LEVEL_Level_1_TM_conversions;
      outC->_L6_IfBlock1 = kcg_false;
      error6 = outC->_L6_IfBlock1;
      _5_m_level = outC->_L74_IfBlock1;
      error = error6;
      m_level = _5_m_level;
    }
    else {
      outC->_2_else_clock_IfBlock1 = outC->m_level_in ==
        INT_M_LEVEL_Level_2_TM_conversions;
      if (outC->_2_else_clock_IfBlock1) {
        outC->_L2_IfBlock1 = kcg_false;
        error10 = outC->_L2_IfBlock1;
        outC->_L1_IfBlock1 = ENUM_M_LEVEL_Level_2_TM_conversions;
        _9_m_level = outC->_L1_IfBlock1;
        error4 = error10;
        _3_m_level = _9_m_level;
      }
      else {
        outC->_1_else_clock_IfBlock1 = outC->m_level_in ==
          INT_M_LEVEL_Level_3_TM_conversions;
        if (outC->_1_else_clock_IfBlock1) {
          outC->_L15_IfBlock1 = kcg_false;
          error14 = outC->_L15_IfBlock1;
          outC->_L26_IfBlock1 = ENUM_M_LEVEL_Level_3_TM_conversions;
          _13_m_level = outC->_L26_IfBlock1;
          error8 = error14;
          _7_m_level = _13_m_level;
        }
        else {
          outC->else_clock_IfBlock1 = outC->m_level_in ==
            INT_M_LEVEL_Level_NTC_TM_conversions;
          if (outC->else_clock_IfBlock1) {
            outC->_L28_IfBlock1 = kcg_false;
            outC->_L17_IfBlock1 = ENUM_M_LEVEL_Level_NTC_TM_conversions;
            _17_m_level = outC->_L17_IfBlock1;
            error18 = outC->_L28_IfBlock1;
            error12 = error18;
            _11_m_level = _17_m_level;
          }
          else {
            outC->_L19_IfBlock1 = kcg_true;
            error16 = outC->_L19_IfBlock1;
            outC->_L210_IfBlock1 = ENUM_M_LEVEL_Level_NTC_TM_conversions;
            _15_m_level = outC->_L210_IfBlock1;
            error12 = error16;
            _11_m_level = _15_m_level;
          }
          error8 = error12;
          _7_m_level = _11_m_level;
        }
        error4 = error8;
        _3_m_level = _7_m_level;
      }
      error = error4;
      m_level = _3_m_level;
    }
    outC->m_level = m_level;
    outC->error = error;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_LEVEL_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

