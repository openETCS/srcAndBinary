/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_inter.h"

/* TA_Lib_internal::EVAL_Q_DANGERPOINT */
kcg_bool EVAL_Q_DANGERPOINT_TA_Lib_inter(
  /* TA_Lib_internal::EVAL_Q_DANGERPOINT::q_dangerpoint */ Q_DANGERPOINT q_dangerpoint)
{
  /* TA_Lib_internal::EVAL_Q_DANGERPOINT::q_dp_bool */
  static kcg_bool q_dp_bool;
  
  q_dp_bool = ENUM_Q_DANGERPOINT_dangerpoint_ == q_dangerpoint;
  return q_dp_bool;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVAL_Q_DANGERPOINT_TA_Lib_inter.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

