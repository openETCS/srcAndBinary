/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::limitPositive */
kcg_real limitPositive_SDM_Types_Pkg(
  /* SDM_Types_Pkg::limitPositive::in */ kcg_real in)
{
  /* SDM_Types_Pkg::limitPositive::limited */
  static kcg_real limited;
  
  /* 2 */ if (in >= 0.0) {
    limited = in;
  }
  else {
    limited = 0.0;
  }
  return limited;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** limitPositive_SDM_Types_Pkg.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

