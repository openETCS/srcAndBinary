/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::limitPositive */
kcg_real limitPositive_SDM_Types_Pkg(
  /* SDM_Types_Pkg::limitPositive::in */kcg_real in)
{
  /* SDM_Types_Pkg::limitPositive::limited */
  static kcg_real limited;
  
  if (in >= 0.0) {
    limited = in;
  }
  else {
    limited = 0.0;
  }
  return limited;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** limitPositive_SDM_Types_Pkg.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */
