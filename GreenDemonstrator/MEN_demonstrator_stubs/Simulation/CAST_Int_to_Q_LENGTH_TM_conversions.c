/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LENGTH_TM_conversions.h"

void CAST_Int_to_Q_LENGTH_reset_TM_conversions(
  outC_CAST_Int_to_Q_LENGTH_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_LENGTH */
void CAST_Int_to_Q_LENGTH_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length_int */kcg_int q_length_int,
  outC_CAST_Int_to_Q_LENGTH_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH _2_q_length;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH q_length;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH _9_q_length;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH _7_q_length;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH _11_q_length;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ kcg_bool error12;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH _13_q_length;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ kcg_bool error14;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH _3_q_length;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::q_length */ Q_LENGTH _5_q_length;
  /* TM_conversions::CAST_Int_to_Q_LENGTH::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = q_length_int;
  outC->q_length_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_length_in ==
    INT_Q_LENGTH_no_info_available_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = kcg_false;
    error1 = outC->_L3_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_2_else_clock_IfBlock1 = outC->q_length_in ==
      INT_Q_LENGTH_confimed_by_device_TM_conversions;
    if (outC->_2_else_clock_IfBlock1) {
      outC->_L33_IfBlock1 = kcg_false;
      error6 = outC->_L33_IfBlock1;
      error = error6;
    }
    else {
      outC->_1_else_clock_IfBlock1 = outC->q_length_in ==
        INT_Q_LENGTH_confimed_by_driver_TM_conversions;
      if (outC->_1_else_clock_IfBlock1) {
        outC->_L4_IfBlock1 = kcg_false;
        error10 = outC->_L4_IfBlock1;
        error4 = error10;
      }
      else {
        outC->else_clock_IfBlock1 = outC->q_length_in ==
          INT_Q_LENGTH_integrity_lost_TM_conversions;
        if (outC->else_clock_IfBlock1) {
          outC->_L35_IfBlock1 = kcg_false;
          error14 = outC->_L35_IfBlock1;
          error8 = error14;
        }
        else {
          outC->_L28_IfBlock1 = kcg_true;
          error12 = outC->_L28_IfBlock1;
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = ENUM_Q_LENGTH_no_info_available_TM_conversions;
    _2_q_length = outC->_L2_IfBlock1;
    outC->q_length = _2_q_length;
  }
  else {
    if (outC->_2_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = ENUM_Q_LENGTH_confimed_by_device_TM_conversions;
      _5_q_length = outC->_L1_IfBlock1;
      q_length = _5_q_length;
    }
    else {
      if (outC->_1_else_clock_IfBlock1) {
        outC->_L14_IfBlock1 = ENUM_Q_LENGTH_confimed_by_driver_TM_conversions;
        _9_q_length = outC->_L14_IfBlock1;
        _3_q_length = _9_q_length;
      }
      else {
        if (outC->else_clock_IfBlock1) {
          outC->_L16_IfBlock1 = ENUM_Q_LENGTH_integrity_lost_TM_conversions;
          _13_q_length = outC->_L16_IfBlock1;
          _7_q_length = _13_q_length;
        }
        else {
          outC->_L17_IfBlock1 = ENUM_Q_LENGTH_integrity_lost_TM_conversions;
          _11_q_length = outC->_L17_IfBlock1;
          _7_q_length = _11_q_length;
        }
        _3_q_length = _7_q_length;
      }
      q_length = _3_q_length;
    }
    outC->q_length = q_length;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LENGTH_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

