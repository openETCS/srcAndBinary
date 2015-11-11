/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCD_to_Int_Utilities.h"

/* Utilities::BCD_to_Int */
void BCD_to_Int_Utilities(
  /* Utilities::BCD_to_Int::bcd_in */ kcg_int bcd_in,
  /* Utilities::BCD_to_Int::int_out */ kcg_int *int_out,
  /* Utilities::BCD_to_Int::error */ kcg_bool *error)
{
  *int_out = bcd_in;
  *error = /* 1 */ Int_Check_Utilities(bcd_in, 9, 0);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BCD_to_Int_Utilities.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

