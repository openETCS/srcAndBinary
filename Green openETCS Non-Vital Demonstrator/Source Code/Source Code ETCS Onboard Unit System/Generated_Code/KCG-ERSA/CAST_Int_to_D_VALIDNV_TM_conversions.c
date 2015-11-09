/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_VALIDNV_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_VALIDNV */
D_VALIDNV CAST_Int_to_D_VALIDNV_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_VALIDNV::d_validnv_int */kcg_int d_validnv_int)
{
  /* TM_conversions::CAST_Int_to_D_VALIDNV::d_validnv */
  static D_VALIDNV d_validnv;
  
  d_validnv = d_validnv_int;
  return d_validnv;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_VALIDNV_TM_conversions.c
** Generation date: 2015-11-09T13:58:56
*************************************************************$ */

