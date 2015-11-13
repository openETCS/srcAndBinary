/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_MN_TM_conversio.h"

/* TM_conversions::CAST_Int_to_NID_MN */
NID_MN CAST_Int_to_NID_MN_TM_conversio(
  /* TM_conversions::CAST_Int_to_NID_MN::nid_mn_int */ kcg_int nid_mn_int)
{
  /* TM_conversions::CAST_Int_to_NID_MN::nid_mn */
  static NID_MN nid_mn;
  
  nid_mn = nid_mn_int;
  return nid_mn;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_MN_TM_conversio.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

