/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DIV_real_XCP_numeric.h"

/* XCP_numeric::DIV_real */
void DIV_real_XCP_numeric(
  /* XCP_numeric::DIV_real::Dividend */ kcg_real Dividend,
  /* XCP_numeric::DIV_real::Divisor */ kcg_real Divisor,
  /* XCP_numeric::DIV_real::Default */ kcg_real Default,
  /* XCP_numeric::DIV_real::Result */ kcg_real *Result,
  /* XCP_numeric::DIV_real::Exception */ kcg_bool *Exception)
{
  /* XCP_numeric::DIV_real::_L8 */
  static kcg_bool _L8;
  
  *Exception = Divisor == ZERO_real_XCP_numeric;
  _L8 = !*Exception;
  /* ck__L8 */ if (_L8) {
    *Result = Dividend / Divisor;
  }
  else {
    *Result = Default;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DIV_real_XCP_numeric.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

