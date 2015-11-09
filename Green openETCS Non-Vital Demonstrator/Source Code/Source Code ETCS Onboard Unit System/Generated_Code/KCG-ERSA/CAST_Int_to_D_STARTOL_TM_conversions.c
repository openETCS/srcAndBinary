/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_STARTOL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_STARTOL */
D_STARTOL CAST_Int_to_D_STARTOL_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_STARTOL::d_startol_int */kcg_int d_startol_int)
{
  /* TM_conversions::CAST_Int_to_D_STARTOL::d_startol */
  static D_STARTOL d_startol;
  
  d_startol = d_startol_int;
  return d_startol;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_STARTOL_TM_conversions.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

