/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_RBC_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_RBC_to_int */
kcg_int CAST_Q_RBC_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_RBC_to_int::q_rbc */ Q_RBC q_rbc)
{
  /* TM_conversions::CAST_Q_RBC_to_int::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_RBC_to_int::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_RBC_to_int::q_rbc_int */ kcg_int q_rbc_int;
  
  IfBlock1_clock = q_rbc == ENUM_Q_RBC_establish_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_rbc_int = INT_Q_RBC_establish_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_rbc == ENUM_Q_RBC_terminate_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_rbc_int = INT_Q_RBC_terminate_TM_conversions;
    }
    else {
      q_rbc_int = INT_Q_RBC_terminate_TM_conversions;
    }
  }
  return q_rbc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_RBC_to_int_TM_conversions.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

