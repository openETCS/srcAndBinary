/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DRLRBG_TM_conversions.h"

void CAST_Int_to_Q_DRLRBG_reset_TM_conversions(
  outC_CAST_Int_to_Q_DRLRBG_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_DRLRBG */
void CAST_Int_to_Q_DRLRBG_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_drlrbg_int */kcg_int q_drlrbg_int,
  outC_CAST_Int_to_Q_DRLRBG_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_dlrbg */ Q_DLRBG _2_q_dlrbg;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_dlrbg */ Q_DLRBG q_dlrbg;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_dlrbg */ Q_DLRBG _9_q_dlrbg;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_dlrbg */ Q_DLRBG _7_q_dlrbg;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_dlrbg */ Q_DLRBG _3_q_dlrbg;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_dlrbg */ Q_DLRBG _5_q_dlrbg;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_drlrbg_int;
  outC->q_drlrbg_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_drlrbg_in ==
    INT_Q_DLRBG_nominal_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_DLRBG_nominal_TM_conversions;
    _2_q_dlrbg = outC->_L4_IfBlock1;
    outC->q_dlrbg = _2_q_dlrbg;
    outC->error = error1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->q_drlrbg_in ==
      INT_Q_DLRBG_reverse_TM_conversions;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L52_IfBlock1 = kcg_false;
      error6 = outC->_L52_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_DLRBG_reverse_TM_conversions;
      _5_q_dlrbg = outC->_L3_IfBlock1;
      error = error6;
      q_dlrbg = _5_q_dlrbg;
    }
    else {
      outC->else_clock_IfBlock1 = outC->q_drlrbg_in ==
        INT_Q_DLRBG_unknown_TM_conversions;
      if (outC->else_clock_IfBlock1) {
        outC->_L43_IfBlock1 = kcg_false;
        error10 = outC->_L43_IfBlock1;
        outC->_L2_IfBlock1 = ENUM_Q_DLRBG_unknown_TM_conversions;
        _9_q_dlrbg = outC->_L2_IfBlock1;
        error4 = error10;
        _3_q_dlrbg = _9_q_dlrbg;
      }
      else {
        outC->_L24_IfBlock1 = ENUM_Q_DLRBG_unknown_TM_conversions;
        outC->_L1_IfBlock1 = kcg_true;
        error8 = outC->_L1_IfBlock1;
        _7_q_dlrbg = outC->_L24_IfBlock1;
        error4 = error8;
        _3_q_dlrbg = _7_q_dlrbg;
      }
      error = error4;
      q_dlrbg = _3_q_dlrbg;
    }
    outC->q_dlrbg = q_dlrbg;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_DRLRBG_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

