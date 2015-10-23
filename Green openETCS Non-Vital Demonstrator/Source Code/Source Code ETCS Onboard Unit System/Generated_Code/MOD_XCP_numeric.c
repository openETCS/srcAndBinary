/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MOD_XCP_numeric.h"

/* XCP_numeric::MOD */
void MOD_XCP_numeric(
  /* XCP_numeric::MOD::Dividend */ kcg_int Dividend,
  /* XCP_numeric::MOD::Divisor */ kcg_int Divisor,
  /* XCP_numeric::MOD::Default */ kcg_int Default,
  /* XCP_numeric::MOD::Result */ kcg_int *Result,
  /* XCP_numeric::MOD::Exception */ kcg_bool *Exception)
{
  /* XCP_numeric::MOD::_L8 */
  static kcg_bool _L8;
  
  *Exception = Divisor == ZERO_int_XCP_numeric;
  _L8 = !*Exception;
  /* ck__L8 */ if (_L8) {
    *Result = Dividend % Divisor;
  }
  else {
    *Result = Default;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MOD_XCP_numeric.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

