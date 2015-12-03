/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DIRTRAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_DIRTRAIN */
Q_DIRTRAIN CAST_Int_to_Q_DIRTRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirltrain_int */kcg_int q_dirltrain_int)
{
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_DIRTRAIN::q_dirtrain */ Q_DIRTRAIN q_dirtrain;
  
  IfBlock1_clock = q_dirltrain_int == INT_Q_DIRTRAIN_nominal_TM_conversions;
  if (IfBlock1_clock) {
    q_dirtrain = ENUM_Q_DIRTRAIN_nominal_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_dirltrain_int ==
      INT_Q_DIRTRAIN_reverse_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      q_dirtrain = ENUM_Q_DIRTRAIN_reverse_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_dirltrain_int ==
        INT_Q_DIRTRAIN_unknown_TM_conversions;
      if (else_clock_IfBlock1) {
        q_dirtrain = ENUM_Q_DIRTRAIN_unknown_TM_conversions;
      }
      else {
        q_dirtrain = ENUM_Q_DIRTRAIN_unknown_TM_conversions;
      }
    }
  }
  return q_dirtrain;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_DIRTRAIN_TM_conversions.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

