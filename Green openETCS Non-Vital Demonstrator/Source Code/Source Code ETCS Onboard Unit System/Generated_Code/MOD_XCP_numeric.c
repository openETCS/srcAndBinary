/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MOD_XCP_numeric.h"

/* XCP_numeric::MOD */
void MOD_XCP_numeric(
  /* XCP_numeric::MOD::Dividend */kcg_int Dividend,
  /* XCP_numeric::MOD::Divisor */kcg_int Divisor,
  /* XCP_numeric::MOD::Default */kcg_int Default,
  /* XCP_numeric::MOD::Result */kcg_int *Result,
  /* XCP_numeric::MOD::Exception */kcg_bool *Exception)
{
  /* XCP_numeric::MOD::_L8 */
  static kcg_bool _L8;
  
  *Exception = Divisor == ZERO_int_XCP_numeric;
  _L8 = !*Exception;
  if (_L8) {
    *Result = Dividend % Divisor;
  }
  else {
    *Result = Default;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MOD_XCP_numeric.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

