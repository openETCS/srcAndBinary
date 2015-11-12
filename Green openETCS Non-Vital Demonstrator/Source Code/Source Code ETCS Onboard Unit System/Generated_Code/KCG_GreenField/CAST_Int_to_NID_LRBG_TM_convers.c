/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_LRBG_TM_convers.h"

/* TM_conversions::CAST_Int_to_NID_LRBG */
NID_LRBG CAST_Int_to_NID_LRBG_TM_convers(
  /* TM_conversions::CAST_Int_to_NID_LRBG::Int_in */ kcg_int Int_in)
{
  /* TM_conversions::CAST_Int_to_NID_LRBG::NID_LRBG_out */
  static NID_LRBG NID_LRBG_out;
  
  NID_LRBG_out = Int_in;
  return NID_LRBG_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_LRBG_TM_convers.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

