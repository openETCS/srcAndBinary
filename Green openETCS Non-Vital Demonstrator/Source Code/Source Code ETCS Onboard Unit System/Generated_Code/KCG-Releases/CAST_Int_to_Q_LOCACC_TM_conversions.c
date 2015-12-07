/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LOCACC */
Q_LOCACC CAST_Int_to_Q_LOCACC_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc_int */ kcg_int q_locacc_int)
{
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc */
  static Q_LOCACC q_locacc;
  
  q_locacc = q_locacc_int;
  return q_locacc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LOCACC_TM_conversions.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

