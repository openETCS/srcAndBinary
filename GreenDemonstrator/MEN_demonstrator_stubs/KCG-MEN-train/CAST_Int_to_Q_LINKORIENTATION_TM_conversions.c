/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION */
Q_LINKORIENTATION CAST_Int_to_Q_LINKORIENTATION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation_int */kcg_int q_linkorientation_int)
{
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation */ Q_LINKORIENTATION q_linkorientation;
  
  IfBlock1_clock = q_linkorientation_int ==
    INT_Q_LINKORIENTATION_nominal_TM_conversions;
  if (IfBlock1_clock) {
    q_linkorientation = ENUM_Q_LINKORIENTATION_nominal_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_linkorientation_int ==
      INT_Q_LINKORIENTATION_reverse_TM_conversions;
    if (else_clock_IfBlock1) {
      q_linkorientation = ENUM_Q_LINKORIENTATION_reverse_TM_conversions;
    }
    else {
      q_linkorientation = ENUM_Q_LINKORIENTATION_reverse_TM_conversions;
    }
  }
  return q_linkorientation;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LINKORIENTATION_TM_conversions.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

