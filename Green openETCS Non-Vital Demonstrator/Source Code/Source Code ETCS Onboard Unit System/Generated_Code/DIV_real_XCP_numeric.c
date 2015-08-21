/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DIV_real_XCP_numeric.h"

/* XCP_numeric::DIV_real */
void DIV_real_XCP_numeric(
  /* XCP_numeric::DIV_real::Dividend */kcg_real Dividend,
  /* XCP_numeric::DIV_real::Divisor */kcg_real Divisor,
  /* XCP_numeric::DIV_real::Default */kcg_real Default,
  /* XCP_numeric::DIV_real::Result */kcg_real *Result,
  /* XCP_numeric::DIV_real::Exception */kcg_bool *Exception)
{
  /* XCP_numeric::DIV_real::_L8 */
  static kcg_bool _L8;
  
  *Exception = Divisor == ZERO_real_XCP_numeric;
  _L8 = !*Exception;
  if (_L8) {
    *Result = Dividend / Divisor;
  }
  else {
    *Result = Default;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DIV_real_XCP_numeric.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

