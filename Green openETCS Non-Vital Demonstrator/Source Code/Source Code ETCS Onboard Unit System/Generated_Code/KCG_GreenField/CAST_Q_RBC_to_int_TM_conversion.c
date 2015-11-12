/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_RBC_to_int_TM_conversion.h"

/* TM_conversions::CAST_Q_RBC_to_int */
kcg_int CAST_Q_RBC_to_int_TM_conversion(
  /* TM_conversions::CAST_Q_RBC_to_int::q_rbc */ Q_RBC q_rbc)
{
  /* TM_conversions::CAST_Q_RBC_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_RBC_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_RBC_to_int::q_rbc_int */
  static kcg_int q_rbc_int;
  
  IfBlock1_clock = q_rbc == ENUM_Q_RBC_establish_TM_convers;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_rbc_int = INT_Q_RBC_establish_TM_conversi;
  }
  else {
    else_clock_IfBlock1 = q_rbc == ENUM_Q_RBC_terminate_TM_convers;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_rbc_int = INT_Q_RBC_terminate_TM_conversi;
    }
    else {
      q_rbc_int = INT_Q_RBC_terminate_TM_conversi;
    }
  }
  return q_rbc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_RBC_to_int_TM_conversion.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

