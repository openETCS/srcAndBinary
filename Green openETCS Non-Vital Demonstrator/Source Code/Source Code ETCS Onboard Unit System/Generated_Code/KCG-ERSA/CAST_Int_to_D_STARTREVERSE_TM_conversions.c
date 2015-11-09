/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_STARTREVERSE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_STARTREVERSE */
D_STARTREVERSE CAST_Int_to_D_STARTREVERSE_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_STARTREVERSE::d_startreverse_int */kcg_int d_startreverse_int)
{
  /* TM_conversions::CAST_Int_to_D_STARTREVERSE::d_startreverse */
  static D_STARTREVERSE d_startreverse;
  
  d_startreverse = d_startreverse_int;
  return d_startreverse;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_STARTREVERSE_TM_conversions.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

