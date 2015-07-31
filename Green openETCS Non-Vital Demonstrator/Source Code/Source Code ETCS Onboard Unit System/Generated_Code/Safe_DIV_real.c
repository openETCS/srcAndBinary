/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Safe_DIV_real.h"

/* Safe_DIV_real */
kcg_real Safe_DIV_real(
  /* Safe_DIV_real::Dividend */kcg_real Dividend,
  /* Safe_DIV_real::Divisor */kcg_real Divisor)
{
  /* Safe_DIV_real::Div0 */
  static kcg_bool Div0;
  /* Safe_DIV_real::Result */
  static kcg_real Result;
  
  Div0 = Divisor == 0.0;
  if (Div0) {
    Result = - 1.0;
  }
  else {
    Result = Dividend / Divisor;
  }
  return Result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Safe_DIV_real.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

