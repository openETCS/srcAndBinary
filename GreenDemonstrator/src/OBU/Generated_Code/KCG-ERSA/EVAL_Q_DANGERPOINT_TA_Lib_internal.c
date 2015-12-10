/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_Q_DANGERPOINT */
kcg_bool EVAL_Q_DANGERPOINT_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_DANGERPOINT::q_dangerpoint */ Q_DANGERPOINT q_dangerpoint)
{
  /* TA_Lib_internal::EVAL_Q_DANGERPOINT::q_dp_bool */ kcg_bool q_dp_bool;
  
  q_dp_bool = ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions ==
    q_dangerpoint;
  return q_dp_bool;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVAL_Q_DANGERPOINT_TA_Lib_internal.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

