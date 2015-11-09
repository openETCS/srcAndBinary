/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_RBC_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_RBC_to_int */
kcg_int CAST_Q_RBC_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_RBC_to_int::q_rbc */Q_RBC q_rbc)
{
  /* TM_conversions::CAST_Q_RBC_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_RBC_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_RBC_to_int::q_rbc_int */
  static kcg_int q_rbc_int;
  
  IfBlock1_clock = q_rbc == ENUM_Q_RBC_establish_TM_conversions;
  if (IfBlock1_clock) {
    q_rbc_int = INT_Q_RBC_establish_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_rbc == ENUM_Q_RBC_terminate_TM_conversions;
    if (else_clock_IfBlock1) {
      q_rbc_int = INT_Q_RBC_terminate_TM_conversions;
    }
    else {
      q_rbc_int = INT_Q_RBC_terminate_TM_conversions;
    }
  }
  return q_rbc_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_RBC_to_int_TM_conversions.c
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */
