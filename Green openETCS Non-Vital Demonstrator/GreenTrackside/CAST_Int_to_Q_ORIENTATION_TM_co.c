/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_ORIENTATION_TM_co.h"

/* TM_conversions::CAST_Int_to_Q_ORIENTATION */
Q_ORIENTATION CAST_Int_to_Q_ORIENTATION_TM_co(
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation_int */ kcg_int q_orientation_int)
{
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */
  static Q_ORIENTATION q_orientation;
  
  IfBlock1_clock = q_orientation_int == INT_Q_ORIENTATION_reverse_TM_co;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_orientation = ENUM_Q_ORIENTATION_reverse_TM_c;
  }
  else {
    else_clock_IfBlock1 = q_orientation_int == INT_Q_ORIENTATION_nominal_TM_co;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_orientation = ENUM_Q_ORIENTATION_nominal_TM_c;
    }
    else {
      q_orientation = ENUM_Q_ORIENTATION_reverse_TM_c;
    }
  }
  return q_orientation;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_ORIENTATION_TM_co.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

