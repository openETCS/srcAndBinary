/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_V_Release_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_V_Release */
void EVAL_V_Release_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_V_Release::V_in */ kcg_int V_in,
  /* TA_Lib_internal::EVAL_V_Release::V_NV_in */ kcg_int V_NV_in,
  /* TA_Lib_internal::EVAL_V_Release::V_out */ V_internal_Type_Obu_BasicTypes_Pkg *V_out,
  /* TA_Lib_internal::EVAL_V_Release::calc_onboard */ kcg_bool *calc_onboard)
{
  *calc_onboard = V_in == 126 * 5;
  /* 2 */ if (*calc_onboard) {
    *V_out = 0;
  }
  else /* 1 */ if (V_in == 127 * 5) {
    *V_out = V_NV_in;
  }
  else {
    *V_out = V_in;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVAL_V_Release_TA_Lib_internal.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

