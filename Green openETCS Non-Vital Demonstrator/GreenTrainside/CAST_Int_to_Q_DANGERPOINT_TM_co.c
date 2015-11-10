/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DANGERPOINT_TM_co.h"

/* TM_conversions::CAST_Int_to_Q_DANGERPOINT */
Q_DANGERPOINT CAST_Int_to_Q_DANGERPOINT_TM_co(
  /* TM_conversions::CAST_Int_to_Q_DANGERPOINT::q_dangerpoint_int */ kcg_int q_dangerpoint_int)
{
  /* TM_conversions::CAST_Int_to_Q_DANGERPOINT::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DANGERPOINT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_DANGERPOINT::q_dangerpoint */
  static Q_DANGERPOINT q_dangerpoint;
  
  IfBlock1_clock = q_dangerpoint_int == INT_Q_DANGERPOINT_no_dangerpoin;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    q_dangerpoint = ENUM_Q_DANGERPOINT_no_dangerpoi;
  }
  else {
    else_clock_IfBlock1 = q_dangerpoint_int == INT_Q_DANGERPOINT_dangerpoint_i;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      q_dangerpoint = ENUM_Q_DANGERPOINT_dangerpoint_;
    }
    else {
      q_dangerpoint = ENUM_Q_DANGERPOINT_dangerpoint_;
    }
  }
  return q_dangerpoint;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_DANGERPOINT_TM_co.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

