/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVectElt_digital.h"

/* digital::Int2BoolVectElt */
void Int2BoolVectElt_digital(
  /* digital::Int2BoolVectElt::Acc */ kcg_int Acc,
  /* digital::Int2BoolVectElt::AccOut */ kcg_int *AccOut,
  /* digital::Int2BoolVectElt::bi */ kcg_bool *bi)
{
  *AccOut = Acc / 2;
  *bi = Acc % 2 == 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int2BoolVectElt_digital.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

