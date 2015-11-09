/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_DIFF_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_DIFF */
V_DIFF CAST_Int_to_V_DIFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_DIFF::v_diff_int */kcg_int v_diff_int)
{
  /* TM_conversions::CAST_Int_to_V_DIFF::v_diff */
  static V_DIFF v_diff;
  
  v_diff = v_diff_int * 5;
  return v_diff;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_DIFF_TM_conversions.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

