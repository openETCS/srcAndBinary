/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_FRONT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_FRONT */
Q_FRONT CAST_Int_to_Q_FRONT_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front_int */kcg_int q_front_int)
{
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */
  static Q_FRONT q_front;
  
  IfBlock1_clock = q_front_int == INT_Q_FRONT_train_length_delay_TM_conversions;
  if (IfBlock1_clock) {
    q_front = ENUM_Q_FRONT_train_length_delay_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_front_int ==
      INT_Q_FRONT_no_train_length_delay_TM_conversions;
    if (else_clock_IfBlock1) {
      q_front = ENUM_Q_FRONT_no_train_length_delay_TM_conversions;
    }
    else {
      q_front = ENUM_Q_FRONT_train_length_delay_TM_conversions;
    }
  }
  return q_front;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_FRONT_TM_conversions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

