/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_LENGTH_to_int_TM_conversions.h"

void CAST_Q_LENGTH_to_int_reset_TM_conversions(
  outC_CAST_Q_LENGTH_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Q_LENGTH_to_int */
void CAST_Q_LENGTH_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length */Q_LENGTH q_length,
  outC_CAST_Q_LENGTH_to_int_TM_conversions *outC)
{
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */ kcg_int _2_q_length_int;
  /* TM_conversions::CAST_Q_LENGTH_to_int::error */ kcg_bool error1;
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */ kcg_int q_length_int;
  /* TM_conversions::CAST_Q_LENGTH_to_int::error */ kcg_bool error;
  /* TM_conversions::CAST_Q_LENGTH_to_int::error */ kcg_bool error10;
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */ kcg_int _9_q_length_int;
  /* TM_conversions::CAST_Q_LENGTH_to_int::error */ kcg_bool error8;
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */ kcg_int _7_q_length_int;
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */ kcg_int _11_q_length_int;
  /* TM_conversions::CAST_Q_LENGTH_to_int::error */ kcg_bool error12;
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */ kcg_int _13_q_length_int;
  /* TM_conversions::CAST_Q_LENGTH_to_int::error */ kcg_bool error14;
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */ kcg_int _3_q_length_int;
  /* TM_conversions::CAST_Q_LENGTH_to_int::error */ kcg_bool error4;
  /* TM_conversions::CAST_Q_LENGTH_to_int::q_length_int */ kcg_int _5_q_length_int;
  /* TM_conversions::CAST_Q_LENGTH_to_int::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = q_length;
  outC->q_length_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_length_in ==
    ENUM_Q_LENGTH_no_info_available_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = kcg_false;
    error1 = outC->_L3_IfBlock1;
    outC->_L2_IfBlock1 = INT_Q_LENGTH_no_info_available_TM_conversions;
    _2_q_length_int = outC->_L2_IfBlock1;
    outC->q_length_int = _2_q_length_int;
    outC->error = error1;
  }
  else {
    outC->_2_else_clock_IfBlock1 = outC->q_length_in ==
      ENUM_Q_LENGTH_confimed_by_device_TM_conversions;
    if (outC->_2_else_clock_IfBlock1) {
      outC->_L33_IfBlock1 = kcg_false;
      error6 = outC->_L33_IfBlock1;
      outC->_L1_IfBlock1 = INT_Q_LENGTH_confimed_by_device_TM_conversions;
      _5_q_length_int = outC->_L1_IfBlock1;
      error = error6;
      q_length_int = _5_q_length_int;
    }
    else {
      outC->_1_else_clock_IfBlock1 = outC->q_length_in ==
        ENUM_Q_LENGTH_confimed_by_driver_TM_conversions;
      if (outC->_1_else_clock_IfBlock1) {
        outC->_L4_IfBlock1 = kcg_false;
        error10 = outC->_L4_IfBlock1;
        outC->_L14_IfBlock1 = INT_Q_LENGTH_confimed_by_driver_TM_conversions;
        _9_q_length_int = outC->_L14_IfBlock1;
        error4 = error10;
        _3_q_length_int = _9_q_length_int;
      }
      else {
        outC->else_clock_IfBlock1 = outC->q_length_in ==
          ENUM_Q_LENGTH_integrity_lost_TM_conversions;
        if (outC->else_clock_IfBlock1) {
          outC->_L35_IfBlock1 = kcg_false;
          error14 = outC->_L35_IfBlock1;
          outC->_L16_IfBlock1 = INT_Q_LENGTH_integrity_lost_TM_conversions;
          _13_q_length_int = outC->_L16_IfBlock1;
          error8 = error14;
          _7_q_length_int = _13_q_length_int;
        }
        else {
          outC->_L28_IfBlock1 = kcg_true;
          error12 = outC->_L28_IfBlock1;
          outC->_L17_IfBlock1 = INT_Q_LENGTH_integrity_lost_TM_conversions;
          _11_q_length_int = outC->_L17_IfBlock1;
          error8 = error12;
          _7_q_length_int = _11_q_length_int;
        }
        error4 = error8;
        _3_q_length_int = _7_q_length_int;
      }
      error = error4;
      q_length_int = _3_q_length_int;
    }
    outC->q_length_int = q_length_int;
    outC->error = error;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_LENGTH_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

