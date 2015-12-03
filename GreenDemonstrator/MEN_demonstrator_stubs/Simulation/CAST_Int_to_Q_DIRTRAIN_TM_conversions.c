/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DIRTRAIN_TM_conversions.h"

void CAST_Int_to_Q_DIRTRAIN_reset_TM_conversions(
  outC_CAST_Int_to_Q_DIRTRAIN_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_DIRTRAIN */
void CAST_Int_to_Q_DIRTRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirltrain_int */kcg_int q_dirltrain_int,
  outC_CAST_Int_to_Q_DIRTRAIN_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirtrain */ Q_DIRTRAIN _2_q_dirtrain;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirtrain */ Q_DIRTRAIN q_dirtrain;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirtrain */ Q_DIRTRAIN _9_q_dirtrain;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirtrain */ Q_DIRTRAIN _7_q_dirtrain;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirtrain */ Q_DIRTRAIN _3_q_dirtrain;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirtrain */ Q_DIRTRAIN _5_q_dirtrain;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_dirltrain_int;
  outC->q_dirltrain_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_dirltrain_in ==
    INT_Q_DIRTRAIN_nominal_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_DIRTRAIN_nominal_TM_conversions;
    _2_q_dirtrain = outC->_L4_IfBlock1;
    outC->q_dirtrain = _2_q_dirtrain;
    outC->error = error1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->q_dirltrain_in ==
      INT_Q_DIRTRAIN_reverse_TM_conversions;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L52_IfBlock1 = kcg_false;
      error6 = outC->_L52_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_DIRTRAIN_reverse_TM_conversions;
      _5_q_dirtrain = outC->_L3_IfBlock1;
      error = error6;
      q_dirtrain = _5_q_dirtrain;
    }
    else {
      outC->else_clock_IfBlock1 = outC->q_dirltrain_in ==
        INT_Q_DIRTRAIN_unknown_TM_conversions;
      if (outC->else_clock_IfBlock1) {
        outC->_L43_IfBlock1 = kcg_false;
        error10 = outC->_L43_IfBlock1;
        outC->_L2_IfBlock1 = ENUM_Q_DIRTRAIN_unknown_TM_conversions;
        _9_q_dirtrain = outC->_L2_IfBlock1;
        error4 = error10;
        _3_q_dirtrain = _9_q_dirtrain;
      }
      else {
        outC->_L24_IfBlock1 = ENUM_Q_DIRTRAIN_unknown_TM_conversions;
        outC->_L1_IfBlock1 = kcg_true;
        error8 = outC->_L1_IfBlock1;
        _7_q_dirtrain = outC->_L24_IfBlock1;
        error4 = error8;
        _3_q_dirtrain = _7_q_dirtrain;
      }
      error = error4;
      q_dirtrain = _3_q_dirtrain;
    }
    outC->q_dirtrain = q_dirtrain;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_DIRTRAIN_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

