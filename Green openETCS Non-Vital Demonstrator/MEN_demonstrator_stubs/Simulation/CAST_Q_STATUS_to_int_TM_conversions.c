/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_STATUS_to_int_TM_conversions.h"

void CAST_Q_STATUS_to_int_reset_TM_conversions(
  outC_CAST_Q_STATUS_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Q_STATUS_to_int */
void CAST_Q_STATUS_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_STATUS_to_int::q_status */Q_STATUS q_status,
  outC_CAST_Q_STATUS_to_int_TM_conversions *outC)
{
  /* TM_conversions::CAST_Q_STATUS_to_int::q_status_int */ kcg_int _2_q_status_int;
  /* TM_conversions::CAST_Q_STATUS_to_int::error */ kcg_bool error1;
  /* TM_conversions::CAST_Q_STATUS_to_int::q_status_int */ kcg_int q_status_int;
  /* TM_conversions::CAST_Q_STATUS_to_int::error */ kcg_bool error;
  /* TM_conversions::CAST_Q_STATUS_to_int::error */ kcg_bool error10;
  /* TM_conversions::CAST_Q_STATUS_to_int::q_status_int */ kcg_int _9_q_status_int;
  /* TM_conversions::CAST_Q_STATUS_to_int::error */ kcg_bool error8;
  /* TM_conversions::CAST_Q_STATUS_to_int::q_status_int */ kcg_int _7_q_status_int;
  /* TM_conversions::CAST_Q_STATUS_to_int::q_status_int */ kcg_int _3_q_status_int;
  /* TM_conversions::CAST_Q_STATUS_to_int::error */ kcg_bool error4;
  /* TM_conversions::CAST_Q_STATUS_to_int::q_status_int */ kcg_int _5_q_status_int;
  /* TM_conversions::CAST_Q_STATUS_to_int::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_status;
  outC->q_status_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_status_in ==
    ENUM_Q_STATUS_valid_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = INT_Q_STATUS_valid_TM_conversions;
    _2_q_status_int = outC->_L4_IfBlock1;
    outC->q_status_int = _2_q_status_int;
    outC->error = error1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->q_status_in ==
      ENUM_Q_STATUS_invalid_TM_conversions;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L52_IfBlock1 = kcg_false;
      error6 = outC->_L52_IfBlock1;
      outC->_L3_IfBlock1 = INT_Q_STATUS_invalid_TM_conversions;
      _5_q_status_int = outC->_L3_IfBlock1;
      error = error6;
      q_status_int = _5_q_status_int;
    }
    else {
      outC->else_clock_IfBlock1 = outC->q_status_in ==
        ENUM_Q_STATUS_unknown_TM_conversions;
      if (outC->else_clock_IfBlock1) {
        outC->_L54_IfBlock1 = kcg_false;
        error10 = outC->_L54_IfBlock1;
        outC->_L43_IfBlock1 = INT_Q_STATUS_unknown_TM_conversions;
        _9_q_status_int = outC->_L43_IfBlock1;
        error4 = error10;
        _3_q_status_int = _9_q_status_int;
      }
      else {
        outC->_L2_IfBlock1 = kcg_true;
        error8 = outC->_L2_IfBlock1;
        outC->_L1_IfBlock1 = INT_Q_STATUS_invalid_TM_conversions;
        _7_q_status_int = outC->_L1_IfBlock1;
        error4 = error8;
        _3_q_status_int = _7_q_status_int;
      }
      error = error4;
      q_status_int = _3_q_status_int;
    }
    outC->q_status_int = q_status_int;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_STATUS_to_int_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

