/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_ORIENTATION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_ORIENTATION */
Q_ORIENTATION CAST_Int_to_Q_ORIENTATION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation_int */ kcg_int q_orientation_int)
{
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */ Q_ORIENTATION q_orientation;
  
  IfBlock1_clock = q_orientation_int ==
    INT_Q_ORIENTATION_reverse_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_orientation = ENUM_Q_ORIENTATION_reverse_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_orientation_int ==
      INT_Q_ORIENTATION_nominal_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_orientation = ENUM_Q_ORIENTATION_nominal_TM_conversions;
    }
    else {
      q_orientation = ENUM_Q_ORIENTATION_reverse_TM_conversions;
    }
  }
  return q_orientation;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_ORIENTATION_TM_conversions.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

