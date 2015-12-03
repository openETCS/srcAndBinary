/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_STATUS_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_STATUS */
Q_STATUS CAST_Int_to_Q_STATUS_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_STATUS::q_status_int */kcg_int q_status_int)
{
  /* TM_conversions::CAST_Int_to_Q_STATUS::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_STATUS::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_STATUS::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_STATUS::q_status */ Q_STATUS q_status;
  
  IfBlock1_clock = q_status_int == INT_Q_STATUS_valid_TM_conversions;
  if (IfBlock1_clock) {
    q_status = ENUM_Q_STATUS_valid_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_status_int ==
      INT_Q_STATUS_invalid_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      q_status = ENUM_Q_STATUS_invalid_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_status_int == INT_Q_STATUS_unknown_TM_conversions;
      if (else_clock_IfBlock1) {
        q_status = ENUM_Q_STATUS_unknown_TM_conversions;
      }
      else {
        q_status = ENUM_Q_STATUS_invalid_TM_conversions;
      }
    }
  }
  return q_status;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_STATUS_TM_conversions.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

