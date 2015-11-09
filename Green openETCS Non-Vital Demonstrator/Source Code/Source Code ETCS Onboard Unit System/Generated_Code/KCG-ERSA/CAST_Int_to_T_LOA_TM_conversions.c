/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_LOA_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_LOA */
T_LOA CAST_Int_to_T_LOA_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_LOA::t_loa_int */kcg_int t_loa_int)
{
  /* TM_conversions::CAST_Int_to_T_LOA::t_loa */
  static T_LOA t_loa;
  
  t_loa = t_loa_int;
  return t_loa;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_LOA_TM_conversions.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

