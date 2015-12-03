/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_FRONT_TM_conversi.h"

/* TM_conversions::CAST_Int_to_Q_FRONT */
Q_FRONT CAST_Int_to_Q_FRONT_TM_conversi(
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front_int */ kcg_int q_front_int)
{
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */
  static Q_FRONT q_front;
  
  IfBlock1_clock = q_front_int == INT_Q_FRONT_train_length_delay_;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_front = ENUM_Q_FRONT_train_length_delay;
  }
  else {
    else_clock_IfBlock1 = q_front_int == INT_Q_FRONT_no_train_length_del;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_front = ENUM_Q_FRONT_no_train_length_de;
    }
    else {
      q_front = ENUM_Q_FRONT_train_length_delay;
    }
  }
  return q_front;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_FRONT_TM_conversi.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

