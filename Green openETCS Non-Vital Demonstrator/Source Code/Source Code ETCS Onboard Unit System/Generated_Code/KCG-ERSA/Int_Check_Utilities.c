/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_Check_Utilities.h"

/* Utilities::Int_Check */
kcg_bool Int_Check_Utilities(
  /* Utilities::Int_Check::int_in */ kcg_int int_in,
  /* Utilities::Int_Check::max_value */ kcg_int max_value,
  /* Utilities::Int_Check::min_value */ kcg_int min_value)
{
  /* Utilities::Int_Check::error */ kcg_bool error;
  
  /* 1 */ if ((min_value > int_in) | (int_in > max_value)) {
    error = kcg_true;
  }
  else {
    error = kcg_false;
  }
  return error;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int_Check_Utilities.c
** Generation date: 2015-12-07T14:47:39
*************************************************************$ */

