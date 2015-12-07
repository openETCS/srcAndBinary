/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_T_LOA */
void EVAL_T_LOA_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_T_LOA::t_loa */ P015_OBU_T_TM *t_loa,
  /* TA_Lib_internal::EVAL_T_LOA::t_loa_unlimited */ kcg_bool *t_loa_unlimited,
  /* TA_Lib_internal::EVAL_T_LOA::t_loa_out */ T_internal_Type_Obu_BasicTypes_Pkg *t_loa_out)
{
  /* TA_Lib_internal::EVAL_T_LOA */
  static kcg_int tmp;
  
  /* 1 */ if ((*t_loa).t_loa < 1023) {
    tmp = 1000;
  }
  else {
    tmp = 0;
  }
  *t_loa_out = (*t_loa).t_loa * tmp;
  *t_loa_unlimited = 1023 == (*t_loa).t_loa;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVAL_T_LOA_TA_Lib_internal.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

